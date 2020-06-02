object F_Login: TF_Login
  Left = 0
  Top = 0
  BorderStyle = bsDialog
  Caption = 'Login'
  ClientHeight = 194
  ClientWidth = 470
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 72
    Top = 29
    Width = 48
    Height = 13
    Caption = 'Username'
  end
  object Label2: TLabel
    Left = 72
    Top = 85
    Width = 46
    Height = 13
    Caption = 'Password'
  end
  object E_Username: TEdit
    Left = 72
    Top = 48
    Width = 297
    Height = 21
    TabOrder = 0
  end
  object E_Password: TEdit
    Left = 72
    Top = 104
    Width = 297
    Height = 21
    PasswordChar = '*'
    TabOrder = 1
  end
  object Button1: TButton
    Left = 294
    Top = 144
    Width = 75
    Height = 25
    Caption = 'Login'
    TabOrder = 2
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 213
    Top = 144
    Width = 75
    Height = 25
    Caption = 'Cancel'
    TabOrder = 3
    OnClick = Button2Click
  end
  object T_User: TADOTable
    Active = True
    ConnectionString = 
      'Provider=SQLNCLI11.1;Integrated Security=SSPI;Persist Security I' +
      'nfo=False;User ID="";Initial Catalog=baza;Data Source="";Initial' +
      ' File Name="";Server SPN=""'
    CursorType = ctStatic
    TableName = 'Users'
    Left = 8
    Top = 136
  end
end
