object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Main Menu'
  ClientHeight = 250
  ClientWidth = 550
  Color = clNavy
  Constraints.MaxHeight = 309
  Constraints.MaxWidth = 566
  Constraints.MinHeight = 309
  Constraints.MinWidth = 566
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  Menu = MainMenu1
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 120
    Top = 72
    Width = 293
    Height = 35
    Alignment = taCenter
    Caption = 'Welcome to The Chase'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWhite
    Font.Height = -29
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object Label2: TLabel
    Left = 80
    Top = 174
    Width = 145
    Height = 13
    Alignment = taCenter
    Caption = 'Please login or register to play'
    Color = clNavy
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWhite
    Font.Height = -11
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentColor = False
    ParentFont = False
  end
  object Button1: TButton
    Left = 157
    Top = 193
    Width = 142
    Height = 49
    Caption = 'Login'
    TabOrder = 0
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 9
    Top = 193
    Width = 142
    Height = 49
    Caption = 'Register'
    TabOrder = 1
    OnClick = Button2Click
  end
  object Button3: TButton
    Left = 400
    Top = 193
    Width = 142
    Height = 49
    Caption = 'Play'
    TabOrder = 2
    OnClick = Button3Click
  end
  object MainMenu1: TMainMenu
    Left = 16
    Top = 8
    object Game1: TMenuItem
      Caption = 'Game'
      object Scoreboard1: TMenuItem
        Caption = 'Scoreboard'
        OnClick = Scoreboard1Click
      end
    end
    object Question1: TMenuItem
      Caption = 'Questions'
      object New1: TMenuItem
        Caption = 'New'
        OnClick = New1Click
      end
      object Edit1: TMenuItem
        Caption = 'Edit'
        OnClick = Edit1Click
      end
    end
    object Users1: TMenuItem
      Caption = 'Users'
      OnClick = Users1Click
      object Edit2: TMenuItem
        Caption = 'Change password'
        OnClick = Edit2Click
      end
      object EditAdminonly1: TMenuItem
        Caption = 'Edit (Admin only)'
        Enabled = False
        OnClick = EditAdminonly1Click
      end
    end
  end
end