
// *************************************************************************** //
//                                                                           
//                             XML Data Binding                              
//                                                                           
//         Generated on: 5/30/2020 22:28:23                                  
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

// IXMLgamesType 

__interface INTERFACE_UUID("{3B184B0A-1674-421A-B028-393962FAF56B}") IXMLgamesType : public Xml::Xmlintf::IXMLNode
{
public:
  // Property Accessors 
  virtual _di_IXMLgameType __fastcall Get_game() = 0;
  // Methods & Properties 
  __property _di_IXMLgameType game = { read=Get_game };
};

// IXMLgameType 

__interface INTERFACE_UUID("{0401F2A1-18B6-45D9-BD90-DAAF6B51A68E}") IXMLgameType : public Xml::Xmlintf::IXMLNode
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

// Forward Decls 

class TXMLgamesType;
class TXMLgameType;

// TXMLgamesType 

class TXMLgamesType : public Xml::Xmldoc::TXMLNode, public IXMLgamesType
{
  __IXMLNODE_IMPL__
protected:
  // IXMLgamesType 
  virtual _di_IXMLgameType __fastcall Get_game();
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

// Global Functions 

_di_IXMLgamesType __fastcall Getgames(Xml::Xmlintf::_di_IXMLDocument Doc);
_di_IXMLgamesType __fastcall Getgames(Xml::Xmldoc::TXMLDocument *Doc);
_di_IXMLgamesType __fastcall Loadgames(const System::UnicodeString& FileName);
_di_IXMLgamesType __fastcall  Newgames();

#define TargetNamespace ""

#endif