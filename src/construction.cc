#include "construction.hh"

MyDetectorConstruction::MyDetectorConstruction(){}
MyDetectorConstruction::~MyDetectorConstruction(){}

G4VPhysicalVolume* MyDetectorConstruction::Construct()
{
  G4NistManager *nist = G4NistManager::Instance();

  // Define the World Material
  G4Material *worldMat = nist->FindOrBuildMaterial("G4_AIR");

  // Construct the World volume
  G4double worldSize=1*m;
  G4Box *solidWorld = new G4Box("solidWorld", 0.5*worldSize, 0.5*worldSize, 0.5*worldSize);
  G4LogicalVolume *logicWorld = new G4LogicalVolume(solidWorld, worldMat, "logicWorld");
  G4VPhysicalVolume *physWorld = new G4PVPlacement(0, G4ThreeVector(0.,0.,0.), logicWorld, "physWorld", 0, false, 0, true);
  return physWorld;
}

void MyDetectorConstruction::ConstructSDandField()
{
}
