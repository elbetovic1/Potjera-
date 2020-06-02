object F_EditUsers: TF_EditUsers
  Left = 0
  Top = 0
  BorderStyle = bsDialog
  Caption = 'Edit Users'
  ClientHeight = 416
  ClientWidth = 669
  Color = clBtnFace
  Constraints.MaxHeight = 445
  Constraints.MaxWidth = 675
  Constraints.MinHeight = 445
  Constraints.MinWidth = 675
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 8
    Top = 224
    Width = 11
    Height = 13
    Caption = 'ID'
    FocusControl = DBEdit1
  end
  object Label2: TLabel
    Left = 8
    Top = 264
    Width = 48
    Height = 13
    Caption = 'Username'
    FocusControl = DBEdit2
  end
  object Label3: TLabel
    Left = 8
    Top = 304
    Width = 46
    Height = 13
    Caption = 'Password'
    FocusControl = DBEdit3
  end
  object DBGrid1: TDBGrid
    Left = 6
    Top = 8
    Width = 654
    Height = 193
    DataSource = DataSource1
    TabOrder = 0
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -11
    TitleFont.Name = 'Tahoma'
    TitleFont.Style = []
    Columns = <
      item
        Expanded = False
        FieldName = 'ID'
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'Username'
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'Password'
        Visible = True
      end>
  end
  object DBEdit1: TDBEdit
    Left = 8
    Top = 240
    Width = 134
    Height = 21
    DataField = 'ID'
    DataSource = DataSource1
    TabOrder = 1
  end
  object DBEdit2: TDBEdit
    Left = 8
    Top = 280
    Width = 654
    Height = 21
    DataField = 'Username'
    DataSource = DataSource1
    TabOrder = 2
  end
  object DBEdit3: TDBEdit
    Left = 8
    Top = 320
    Width = 654
    Height = 21
    DataField = 'Password'
    DataSource = DataSource1
    TabOrder = 3
  end
  object DBNavigator1: TDBNavigator
    Left = 8
    Top = 360
    Width = 290
    Height = 25
    DataSource = DataSource1
    TabOrder = 4
    OnClick = DBNavigator1Click
  end
  object T_User: TADOTable
    Active = True
    Connection = ADOConnection1
    CursorType = ctStatic
    TableName = 'Users'
    Left = 384
    Top = 352
    object T_UserID: TIntegerField
      DisplayWidth = 10
      FieldName = 'ID'
    end
    object T_UserUsername: TStringField
      DisplayWidth = 40
      FieldName = 'Username'
      Size = 50
    end
    object T_UserPassword: TStringField
      DisplayWidth = 50
      FieldName = 'Password'
      Size = 50
    end
  end
  object DataSource1: TDataSource
    DataSet = T_User
    Left = 440
    Top = 352
  end
  object ADOConnection1: TADOConnection
    Connected = True
    ConnectionString = 
      'Provider=SQLNCLI11.1;Integrated Security=SSPI;Persist Security I' +
      'nfo=False;User ID="";Initial Catalog=baza;Data Source="";Initial' +
      ' File Name="";Server SPN=""'
    LoginPrompt = False
    Provider = 'SQLNCLI11.1'
    Left = 512
    Top = 352
  end
end