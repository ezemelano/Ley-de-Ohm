//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------



void __fastcall TForm1::Btn_SalirClick(TObject *Sender)
{
        //Movemos el formulario a la derecha
        for(int PosForm = Form1->Left;PosForm<1500 ; PosForm++)
        {
                Sleep(1);
                PosForm++;
                Form1->Left=PosForm;
        }

        // Salir
        Close();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Rdb_VoltajeClick(TObject *Sender)
{
        // Estados iniciales para calcular el VOLTAJE

        //Borramos el texto del campo seleccionado
        Txt_Voltaje->Text = "";

        //Desactivamos el campo correspondiente
        Txt_Voltaje->Enabled = false;
        Txt_Corriente->Enabled = true;
        Txt_Resistencia->Enabled = true;
        Txt_Potencia->Enabled = true;

        //Cambiamos el color del fondo
        Txt_Corriente->Color = clWindow;
        Txt_Voltaje->Color = clBtnFace;
        Txt_Resistencia->Color = clWindow;
        Txt_Potencia->Color = clWindow;

        //Seteamos el foco
        Txt_Corriente->SetFocus();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Rdb_CorrienteClick(TObject *Sender)
{
        // Estados iniciales para calcular la CORRIENTE

        //Borramos el texto del campo seleccionado
        Txt_Corriente->Text = "";

        //Desactivamos el campo correspondiente
        Txt_Voltaje->Enabled = true;
        Txt_Corriente->Enabled = false;
        Txt_Resistencia->Enabled = true;
        Txt_Potencia->Enabled = true;

        //Cambiamos el color del fondo
        Txt_Corriente->Color = clBtnFace;
        Txt_Voltaje->Color = clWindow;
        Txt_Resistencia->Color = clWindow;
        Txt_Potencia->Color = clWindow;

        //Seteamos el foco
        Txt_Voltaje->SetFocus();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Rdb_ResistenciaClick(TObject *Sender)
{
        // Estados iniciales para calcular la RESISTENCIA

        //Borramos el texto del campo seleccionado
        Txt_Resistencia->Text = "";

        //Desactivamos el campo correspondiente
        Txt_Voltaje->Enabled = true;
        Txt_Corriente->Enabled = true;
        Txt_Resistencia->Enabled = false;
        Txt_Potencia->Enabled = true;

        //Cambiamos el color del fondo
        Txt_Corriente->Color = clWindow;
        Txt_Voltaje->Color = clWindow;
        Txt_Resistencia->Color = clBtnFace;
        Txt_Potencia->Color = clWindow;

        //Seteamos el foco
        Txt_Voltaje->SetFocus();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Rdb_PotenciaClick(TObject *Sender)
{
        // Estados iniciales para calcular la POTENCIA

        //Borramos el texto del campo seleccionado
        Txt_Potencia->Text = "";

        //Desactivamos el campo correspondiente
        Txt_Voltaje->Enabled = true;
        Txt_Corriente->Enabled = true;
        Txt_Resistencia->Enabled = true;
        Txt_Potencia->Enabled = false;

        //Cambiamos el color del fondo
        Txt_Corriente->Color = clWindow;
        Txt_Voltaje->Color = clWindow;
        Txt_Resistencia->Color = clWindow;
        Txt_Potencia->Color = clBtnFace;

        //Seteamos el foco
        Txt_Voltaje->SetFocus();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Btn_CalcularClick(TObject *Sender)
{
        // Se crean las variables a usar
        float voltaje;
        float corriente;
        float resistencia;
        float potencia;

        //Calcular voltaje (V=IxR)
        if(Rdb_Voltaje->Checked){
                corriente = StrToFloat(Txt_Corriente->Text);
                resistencia = StrToFloat(Txt_Resistencia->Text);

                voltaje = corriente * resistencia;
                potencia = voltaje * corriente;

                Txt_Voltaje->Text = FloatToStr(voltaje);
                Txt_Potencia->Text = FloatToStr(potencia);
        }

        //Calcular corriente (I=V/R)
        if(Rdb_Corriente->Checked){
                voltaje = StrToFloat(Txt_Voltaje->Text);
                resistencia = StrToFloat(Txt_Resistencia->Text);

                corriente = voltaje / resistencia;
                potencia = voltaje * corriente;

                Txt_Corriente->Text = FloatToStr(corriente);
                Txt_Potencia->Text = FloatToStr(potencia);
        }

        //Calcular resistencia (R=V/I)
        if(Rdb_Resistencia->Checked){
                voltaje = StrToFloat(Txt_Voltaje->Text);
                corriente = StrToFloat(Txt_Corriente->Text);

                resistencia = voltaje / corriente;
                potencia = voltaje * corriente;

                Txt_Resistencia->Text = FloatToStr(resistencia);
                Txt_Potencia->Text = FloatToStr(potencia);
        }

        //Calcular Potencia (P=V*I)
        if(Rdb_Potencia->Checked){
                voltaje = StrToFloat(Txt_Voltaje->Text);
                corriente = StrToFloat(Txt_Corriente->Text);
                resistencia = StrToFloat(Txt_Resistencia->Text);

                potencia = voltaje * corriente;

                Txt_Potencia->Text = FloatToStr(potencia);
        }

}
//---------------------------------------------------------------------------


