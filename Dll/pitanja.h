
// ************************************************************************ //
//                                                                        
//                            XML Data Binding                            
//                                                                        
//         Generated on: 5/18/2020 15:11:12                               
//       Generated from: C:\Users\elbet\Desktop\Projekt\App\pitanja.xml   
//   Settings stored in: C:\Users\elbet\Desktop\Projekt\App\pitanja.xdb   
//                                                                        
// ************************************************************************ //

#ifndef   pitanjaH
#define   pitanjaH

#include <System.hpp>
#include <Xml.Xmldom.hpp>
#include <Xml.XMLIntf.hpp>
#include <Xml.XMLDoc.hpp>
#include <XMLNodeImp.h>
#include <Xml.xmlutil.hpp>


// Forward Decls 

__interface IXMLpitanjaType;
typedef System::DelphiInterface<IXMLpitanjaType> _di_IXMLpitanjaType;
__interface IXMLpitanjeType;
typedef System::DelphiInterface<IXMLpitanjeType> _di_IXMLpitanjeType;

// IXMLpitanjaType 

__interface INTERFACE_UUID("{8C16D9A9-EBA0-4BD0-8292-16866E862A13}") IXMLpitanjaType : public Xml::Xmlintf::IXMLNodeCollection
{
public:
public:
  // Property Accessors 
  virtual _di_IXMLpitanjeType __fastcall Get_pitanje(int Index) = 0;
  // Methods & Properties 
  virtual _di_IXMLpitanjeType __fastcall Add() = 0;
  virtual _di_IXMLpitanjeType __fastcall Insert(const int Index) = 0;
  __property _di_IXMLpitanjeType pitanje[int Index] = { read=Get_pitanje };/* default */
};

// IXMLpitanjeType 

__interface INTERFACE_UUID("{F0038280-1D4C-4275-8249-CD688D41CAC2}") IXMLpitanjeType : public Xml::Xmlintf::IXMLNode
{
public:
  // Property Accessors 
  virtual System::UnicodeString __fastcall Get_pit() = 0;
  virtual System::UnicodeString __fastcall Get_odg1() = 0;
  virtual System::UnicodeString __fastcall Get_odg2() = 0;
  virtual System::UnicodeString __fastcall Get_odg3() = 0;
  virtual int __fastcall Get_tocan() = 0;
  virtual void __fastcall Set_pit(System::UnicodeString Value) = 0;
  virtual void __fastcall Set_odg1(System::UnicodeString Value) = 0;
  virtual void __fastcall Set_odg2(System::UnicodeString Value) = 0;
  virtual void __fastcall Set_odg3(System::UnicodeString Value) = 0;
  virtual void __fastcall Set_tocan(int Value) = 0;
  // Methods & Properties 
  __property System::UnicodeString pit = { read=Get_pit, write=Set_pit };
  __property System::UnicodeString odg1 = { read=Get_odg1, write=Set_odg1 };
  __property System::UnicodeString odg2 = { read=Get_odg2, write=Set_odg2 };
  __property System::UnicodeString odg3 = { read=Get_odg3, write=Set_odg3 };
  __property int tocan = { read=Get_tocan, write=Set_tocan };
};

// Forward Decls 

class TXMLpitanjaType;
class TXMLpitanjeType;

// TXMLpitanjaType 

class TXMLpitanjaType : public Xml::Xmldoc::TXMLNodeCollection, public IXMLpitanjaType
{
  __IXMLNODECOLLECTION_IMPL__
protected:
  // IXMLpitanjaType 
  virtual _di_IXMLpitanjeType __fastcall Get_pitanje(int Index);
  virtual _di_IXMLpitanjeType __fastcall Add();
  virtual _di_IXMLpitanjeType __fastcall Insert(const int Index);
public:
  virtual void __fastcall AfterConstruction(void);
};

// TXMLpitanjeType 

class TXMLpitanjeType : public Xml::Xmldoc::TXMLNode, public IXMLpitanjeType
{
  __IXMLNODE_IMPL__
protected:
  // IXMLpitanjeType 
  virtual System::UnicodeString __fastcall Get_pit();
  virtual System::UnicodeString __fastcall Get_odg1();
  virtual System::UnicodeString __fastcall Get_odg2();
  virtual System::UnicodeString __fastcall Get_odg3();
  virtual int __fastcall Get_tocan();
  virtual void __fastcall Set_pit(System::UnicodeString Value);
  virtual void __fastcall Set_odg1(System::UnicodeString Value);
  virtual void __fastcall Set_odg2(System::UnicodeString Value);
  virtual void __fastcall Set_odg3(System::UnicodeString Value);
  virtual void __fastcall Set_tocan(int Value);
};

// Global Functions 

_di_IXMLpitanjaType __fastcall Getpitanja(Xml::Xmlintf::_di_IXMLDocument Doc);
_di_IXMLpitanjaType __fastcall Getpitanja(Xml::Xmldoc::TXMLDocument *Doc);
_di_IXMLpitanjaType __fastcall Loadpitanja(const System::UnicodeString& FileName);
_di_IXMLpitanjaType __fastcall  Newpitanja();

#define TargetNamespace ""

#endif