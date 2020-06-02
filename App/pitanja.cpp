
// ************************************************************************ //
//                                                                        
//                            XML Data Binding                            
//                                                                        
//         Generated on: 5/25/2020 17:09:29                               
//       Generated from: C:\Users\elbet\Desktop\Projekt\App\pitanja.xml   
//   Settings stored in: C:\Users\elbet\Desktop\Projekt\App\pitanja.xdb   
//                                                                        
// ************************************************************************ //

#include <System.hpp>
#pragma hdrstop

#include "pitanja.h"


// Global Functions 

_di_IXMLpitanjaType __fastcall Getpitanja(Xml::Xmlintf::_di_IXMLDocument Doc)
{
  return (_di_IXMLpitanjaType) Doc->GetDocBinding("pitanja", __classid(TXMLpitanjaType), TargetNamespace);
};

_di_IXMLpitanjaType __fastcall Getpitanja(Xml::Xmldoc::TXMLDocument *Doc)
{
  Xml::Xmlintf::_di_IXMLDocument DocIntf;
  Doc->GetInterface(DocIntf);
  return Getpitanja(DocIntf);
};

_di_IXMLpitanjaType __fastcall Loadpitanja(const System::UnicodeString& FileName)
{
  return (_di_IXMLpitanjaType) Xml::Xmldoc::LoadXMLDocument(FileName)->GetDocBinding("pitanja", __classid(TXMLpitanjaType), TargetNamespace);
};

_di_IXMLpitanjaType __fastcall  Newpitanja()
{
  return (_di_IXMLpitanjaType) Xml::Xmldoc::NewXMLDocument()->GetDocBinding("pitanja", __classid(TXMLpitanjaType), TargetNamespace);
};

// TXMLpitanjaType 

void __fastcall TXMLpitanjaType::AfterConstruction(void)
{
  RegisterChildNode(System::UnicodeString("pitanje"), __classid(TXMLpitanjeType));
  ItemTag = "pitanje";
  ItemInterface = __uuidof(IXMLpitanjeType);
  Xml::Xmldoc::TXMLNodeCollection::AfterConstruction();
};

_di_IXMLpitanjeType __fastcall TXMLpitanjaType::Get_pitanje(int Index)
{
  return (_di_IXMLpitanjeType) List->Nodes[Index];
};

_di_IXMLpitanjeType __fastcall TXMLpitanjaType::Add()
{
  return (_di_IXMLpitanjeType) AddItem(-1);
};

_di_IXMLpitanjeType __fastcall TXMLpitanjaType::Insert(const int Index)
{
  return (_di_IXMLpitanjeType) AddItem(Index);
};

// TXMLpitanjeType 

System::UnicodeString __fastcall TXMLpitanjeType::Get_pit()
{
  return GetChildNodes()->Nodes[System::UnicodeString("pit")]->Text;
};

void __fastcall TXMLpitanjeType::Set_pit(System::UnicodeString Value)
{
  GetChildNodes()->Nodes[System::UnicodeString("pit")]->NodeValue = Value;
};

System::UnicodeString __fastcall TXMLpitanjeType::Get_odg1()
{
  return GetChildNodes()->Nodes[System::UnicodeString("odg1")]->Text;
};

void __fastcall TXMLpitanjeType::Set_odg1(System::UnicodeString Value)
{
  GetChildNodes()->Nodes[System::UnicodeString("odg1")]->NodeValue = Value;
};

System::UnicodeString __fastcall TXMLpitanjeType::Get_odg2()
{
  return GetChildNodes()->Nodes[System::UnicodeString("odg2")]->Text;
};

void __fastcall TXMLpitanjeType::Set_odg2(System::UnicodeString Value)
{
  GetChildNodes()->Nodes[System::UnicodeString("odg2")]->NodeValue = Value;
};

System::UnicodeString __fastcall TXMLpitanjeType::Get_odg3()
{
  return GetChildNodes()->Nodes[System::UnicodeString("odg3")]->Text;
};

void __fastcall TXMLpitanjeType::Set_odg3(System::UnicodeString Value)
{
  GetChildNodes()->Nodes[System::UnicodeString("odg3")]->NodeValue = Value;
};

int __fastcall TXMLpitanjeType::Get_tocan()
{
  return GetChildNodes()->Nodes[System::UnicodeString("tocan")]->NodeValue.operator int();
};

void __fastcall TXMLpitanjeType::Set_tocan(int Value)
{
  GetChildNodes()->Nodes[System::UnicodeString("tocan")]->NodeValue = Value;
};
