#include "event.hh"
#include "G4UnitsTable.hh"

MyEventAction::MyEventAction(MyRunAction*)
{
}

MyEventAction::~MyEventAction(){}


void MyEventAction::BeginOfEventAction(const G4Event*)
{
}

void MyEventAction::EndOfEventAction(const G4Event* event)
{
}
