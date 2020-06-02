
// *************************************************************************** //
//                                                                           
//                             XML Data Binding                              
//                                                                           
//         Generated on: 5/30/2020 22:33:41                                  
//       Generated from: C:\Users\elbet\Desktop\Projekt\App\scoreboard.xml   
//   Settings stored in: C:\Users\elbet\Desktop\Projekt\App\scoreboard.xdb   
//                                                                           
// *************************************************************************** //

#ifndef   scoreboardH
#define   scoreboardH

#include <System.hpp>
#include <Xml.Xmldom.hpp>
#include <Xml.XMLIntf.hpp>
#include <Xml.XMLDoc.hpp>
#include <XMLNodeImp.h>
#include <Xml.xmlutil.hpp>


// Forward Decls 

__interface IXMLgamesType;
typedef System::DelphiInterface<IXMLgamesType> _di_IXMLgamesType;
__interface IXMLgameType;
typedef System::DelphiInterface<IXMLgameType> _di_IXMLgameType;
__interface IXMLgameTypeList;
typedef System::DelphiInterface<IXMLgameTypeList> _di_IXMLgameTypeList;

// IXMLgamesType 

__interface INTERFACE_UUID("{FEDA8B8D-79A9-40F5-8197-C512B405916C}") IXMLgamesType : public Xml::Xmlintf::IXMLNodeCollection
{
public:
public:
  // Property Accessors 
  virtual _di_IXMLgameType __fastcall Get_game(int Index) = 0;
  // Methods & Properties 
  virtual _di_IXMLgameType __fastcall Add() = 0;
  virtual _di_IXMLgameType __fastcall Insert(const int Index) = 0;
  __property _di_IXMLgameType game[int Index] = { read=Get_game };/* default */
};

// IXMLgameType 

__interface INTERFACE_UUID("{876BD3FA-E902-4B6F-A8D5-C1F8B56FCD3F}") IXMLgameType : public Xml::Xmlintf::IXMLNode
{
public:
  // Property Accessors 
  virtual System::UnicodeString __fastcall Get_username() = 0;
  virtual int __fastcall Get_score() = 0;
  virtual System::UnicodeString __fastcall Get_offer() = 0;
  virtual System::UnicodeString __fastcall Get_chaser() = 0;
  virtual void __fastcall Set_username(System::UnicodeString Value) = 0;
  virtual void __fastcall Set_score(int Value) = 0;
  virtual void __fastcall Set_offer(System::UnicodeString Value) = 0;
  virtual void __fastcall Set_chaser(System::UnicodeString Value) = 0;
  // Methods & Properties 
  __property System::UnicodeString username = { read=Get_username, write=Set_username };
  __property int score = { read=Get_score, write=Set_score };
  __property System::UnicodeString offer = { read=Get_offer, write=Set_offer };
  __property System::UnicodeString chaser = { read=Get_chaser, write=Set_chaser };
};

// IXMLgameTypeList 

__interface INTERFACE_UUID("{0ED10297-45E1-4CC9-9543-74217BB37453}") IXMLgameTypeList : public Xml::Xmlintf::IXMLNodeCollection
{
public:
  // Methods & Properties 
  virtual _di_IXMLgameType __fastcall Add() = 0;
  virtual _di_IXMLgameType __fastcall Insert(const int Index) = 0;

  virtual _di_IXMLgameType __fastcall Get_Item(int Index) = 0;
  __property _di_IXMLgameType Items[int Index] = { read=Get_Item /* default */ };
};

// Forward Decls 

class TXMLgamesType;
class TXMLgameType;
class TXMLgameTypeList;

// TXMLgamesType 

class TXMLgamesType : public Xml::Xmldoc::TXMLNodeCollection, public IXMLgamesType
{
  __IXMLNODECOLLECTION_IMPL__
protected:
  // IXMLgamesType 
  virtual _di_IXMLgameType __fastcall Get_game(int Index);
  virtual _di_IXMLgameType __fastcall Add();
  virtual _di_IXMLgameType __fastcall Insert(const int Index);
public:
  virtual void __fastcall AfterConstruction(void);
};

// TXMLgameType 

class TXMLgameType : public Xml::Xmldoc::TXMLNode, public IXMLgameType
{
  __IXMLNODE_IMPL__
protected:
  // IXMLgameType 
  virtual System::UnicodeString __fastcall Get_username();
  virtual int __fastcall Get_score();
  virtual System::UnicodeString __fastcall Get_offer();
  virtual System::UnicodeString __fastcall Get_chaser();
  virtual void __fastcall Set_username(System::UnicodeString Value);
  virtual void __fastcall Set_score(int Value);
  virtual void __fastcall Set_offer(System::UnicodeString Value);
  virtual void __fastcall Set_chaser(System::UnicodeString Value);
};

// TXMLgameTypeList 

class TXMLgameTypeList : public Xml::Xmldoc::TXMLNodeCollection, public IXMLgameTypeList
{
  __IXMLNODECOLLECTION_IMPL__
protected:
  // IXMLgameTypeList 
  virtual _di_IXMLgameType __fastcall Add();
  virtual _di_IXMLgameType __fastcall Insert(const int Index);

  virtual _di_IXMLgameType __fastcall Get_Item(int Index);
};

// Global Functions 

_di_IXMLgamesType __fastcall Getgames(Xml::Xmlintf::_di_IXMLDocument Doc);
_di_IXMLgamesType __fastcall Getgames(Xml::Xmldoc::TXMLDocument *Doc);
_di_IXMLgamesType __fastcall Loadgames(const System::UnicodeString& FileName);
_di_IXMLgamesType __fastcall  Newgames();

#define TargetNamespace ""

#endif