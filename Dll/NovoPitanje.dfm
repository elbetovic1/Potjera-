object F_NovoPitanje: TF_NovoPitanje
  Left = 0
  Top = 0
  BorderStyle = bsDialog
  Caption = 'New Question'
  ClientHeight = 523
  ClientWidth = 584
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 8
    Top = 21
    Width = 43
    Height = 13
    Caption = 'Question'
  end
  object ListView1: TListView
    Left = 7
    Top = 327
    Width = 569
    Height = 178
    Columns = <
      item
        AutoSize = True
        Caption = 'Pitanje'
      end
      item
        AutoSize = True
        Caption = 'Odgovor'
      end
      item
        AutoSize = True
        Caption = 'Odgovor'
      end
      item
        AutoSize = True
        Caption = 'Odgovor'
      end>
    GridLines = True
    TabOrder = 3
    ViewStyle = vsReport
  end
  object Edit1: TEdit
    Left = 8
    Top = 40
    Width = 569
    Height = 21
    TabOrder = 0
  end
  object Button1: TButton
    Left = 8
    Top = 264
    Width = 569
    Height = 25
    Caption = 'Add'
    TabOrder = 1
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 8
    Top = 295
    Width = 569
    Height = 25
    Caption = 'Refresh list'
    TabOrder = 2
    OnClick = Button2Click
  end
  object GroupBox1: TGroupBox
    Left = 8
    Top = 88
    Width = 569
    Height = 163
    Caption = 'Answers'
    TabOrder = 4
    object Edit2: TEdit
      Left = 16
      Top = 32
      Width = 369
      Height = 21
      TabOrder = 0
    end
    object Edit3: TEdit
      Left = 16
      Top = 80
      Width = 369
      Height = 21
      TabOrder = 1
    end
    object Edit4: TEdit
      Left = 16
      Top = 128
      Width = 369
      Height = 21
      TabOrder = 2
    end
    object RadioButton1: TRadioButton
      Left = 408
      Top = 34
      Width = 113
      Height = 17
      Caption = 'Right Answer'
      TabOrder = 3
    end
    object RadioButton2: TRadioButton
      Left = 408
      Top = 82
      Width = 113
      Height = 17
      Caption = 'Right Answer'
      TabOrder = 4
    end
    object RadioButton3: TRadioButton
      Left = 408
      Top = 130
      Width = 113
      Height = 17
      Caption = 'Right Answer'
      TabOrder = 5
    end
  end
  object XMLDocument1: TXMLDocument
    Active = True
    FileName = 'C:\Users\elbet\Desktop\Projekt\App\pitanja.xml'
    Left = 72
    Top = 408
  end
end
