object Form5: TForm5
  Left = 0
  Top = 0
  Caption = 'Form5'
  ClientHeight = 299
  ClientWidth = 637
  Color = clNavy
  Constraints.MaxHeight = 338
  Constraints.MaxWidth = 653
  Constraints.MinHeight = 338
  Constraints.MinWidth = 653
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 0
    Top = 32
    Width = 633
    Height = 49
    Alignment = taCenter
    AutoSize = False
    Caption = 'Congrats, you won'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWhite
    Font.Height = -32
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object Label2: TLabel
    Left = 0
    Top = 120
    Width = 633
    Height = 49
    Alignment = taCenter
    AutoSize = False
    Caption = 'Score:'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWhite
    Font.Height = -32
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object Button1: TButton
    Left = 344
    Top = 232
    Width = 267
    Height = 59
    Caption = 'Submit score'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -15
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 0
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 32
    Top = 232
    Width = 267
    Height = 59
    Caption = 'Cancel'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -15
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 1
    OnClick = Button2Click
  end
  object XMLDocument1: TXMLDocument
    Active = True
    FileName = 'C:\Users\elbet\Desktop\Projekt\App\scoreboard.xml'
    Left = 104
    Top = 119
  end
end