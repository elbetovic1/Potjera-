
// *************************************************************************** //
//                                                                           
//                             XML Data Binding                              
//                                                                           
//         Generated on: 5/30/2020 22:33:41                                  
//       Generated from: C:\Users\elbet\Desktop\Projekt\App\scoreboard.xml   
//   Settings stored in: C:\Users\elbet\Desktop\Projekt\App\scoreboard.xdb   
//                                                                           
// *************************************************************************** //

#include <System.hpp>
#pragma hdrstop

#include "scoreboard.h"


// Global Functions 

_di_IXMLgamesType __fastcall Getgames(Xml::Xmlintf::_di_IXMLDocument Doc)
{
  return (_di_IXMLgamesType) Doc->GetDocBinding("games", __classid(TXMLgamesType), TargetNamespace);
};

_di_IXMLgamesType __fastcall Getgames(Xml::Xmldoc::TXMLDocument *Doc)
{
  Xml::Xmlintf::_di_IXMLDocument DocIntf;
  Doc->GetInterface(DocIntf);
  return Getgames(DocIntf);
};

_di_IXMLgamesType __fastcall Loadgames(const System::UnicodeString& FileName)
{
  return (_di_IXMLgamesType) Xml::Xmldoc::LoadXMLDocument(FileName)->GetDocBinding("games", __classid(TXMLgamesType), TargetNamespace);
};

_di_IXMLgamesType __fastcall  Newgames()
{
  return (_di_IXMLgamesType) Xml::Xmldoc::NewXMLDocument()->GetDocBinding("games", __classid(TXMLgamesType), TargetNamespace);
};

// TXMLgamesType 

void __fastcall TXMLgamesType::AfterConstruction(void)
{
  RegisterChildNode(System::UnicodeString("game"), __classid(TXMLgameType));
  ItemTag = "game";
  ItemInterface = __uuidof(IXMLgameType);
  Xml::Xmldoc::TXMLNodeCollection::AfterConstruction();
};

_di_IXMLgameType __fastcall TXMLgamesType::Get_game(int Index)
{
  return (_di_IXMLgameType) List->Nodes[Index];
};

_di_IXMLgameType __fastcall TXMLgamesType::Add()
{
  return (_di_IXMLgameType) AddItem(-1);
};

_di_IXMLgameType __fastcall TXMLgamesType::Insert(const int Index)
{
  return (_di_IXMLgameType) AddItem(Index);
};

// TXMLgameType 

System::UnicodeString __fastcall TXMLgameType::Get_username()
{
  return GetChildNodes()->Nodes[System::UnicodeString("username")]->Text;
};

void __fastcall TXMLgameType::Set_username(System::UnicodeString Value)
{
  GetChildNodes()->Nodes[System::UnicodeString("username")]->NodeValue = Value;
};

int __fastcall TXMLgameType::Get_score()
{
  return GetChildNodes()->Nodes[System::UnicodeString("score")]->NodeValue.operator int();
};

void __fastcall TXMLgameType::Set_score(int Value)
{
  GetChildNodes()->Nodes[System::UnicodeString("score")]->NodeValue = Value;
};

System::UnicodeString __fastcall TXMLgameType::Get_offer()
{
  return GetChildNodes()->Nodes[System::UnicodeString("offer")]->Text;
};

void __fastcall TXMLgameType::Set_offer(System::UnicodeString Value)
{
  GetChildNodes()->Nodes[System::UnicodeString("offer")]->NodeValue = Value;
};

System::UnicodeString __fastcall TXMLgameType::Get_chaser()
{
  return GetChildNodes()->Nodes[System::UnicodeString("chaser")]->Text;
};

void __fastcall TXMLgameType::Set_chaser(System::UnicodeString Value)
{
  GetChildNodes()->Nodes[System::UnicodeString("chaser")]->NodeValue = Value;
};

// TXMLgameTypeList 

_di_IXMLgameType __fastcall TXMLgameTypeList::Add()
{
  return (_di_IXMLgameType) AddItem(-1);
};

_di_IXMLgameType __fastcall TXMLgameTypeList::Insert(const int Index)
{
  return (_di_IXMLgameType) AddItem(Index);
};

_di_IXMLgameType __fastcall TXMLgameTypeList::Get_Item(int Index)
{
  return (_di_IXMLgameType) List->Nodes[Index];
};