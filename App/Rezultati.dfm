object Form6: TForm6
  Left = 0
  Top = 0
  Caption = 'Scoreboard'
  ClientHeight = 476
  ClientWidth = 595
  Color = clBtnFace
  Constraints.MaxHeight = 515
  Constraints.MaxWidth = 611
  Constraints.MinHeight = 515
  Constraints.MinWidth = 611
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 8
    Top = 32
    Width = 172
    Height = 39
    Caption = 'Scoreboard:'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -32
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object ListView1: TListView
    Left = 8
    Top = 77
    Width = 577
    Height = 353
    Align = alCustom
    Columns = <
      item
        AutoSize = True
        Caption = 'Username'
      end
      item
        AutoSize = True
        Caption = 'Score'
      end
      item
        AutoSize = True
        Caption = 'Chaser'
      end
      item
        Caption = 'Offer'
      end>
    SortType = stData
    TabOrder = 0
    ViewStyle = vsReport
  end
  object Button1: TButton
    Left = 8
    Top = 443
    Width = 577
    Height = 25
    Caption = 'Refresh'
    TabOrder = 1
    OnClick = Button1Click
  end
  object XMLDocument1: TXMLDocument
    Active = True
    FileName = 'C:\Users\elbet\Desktop\Projekt\App\scoreboard.xml'
    Left = 176
    Top = 264
  end
end