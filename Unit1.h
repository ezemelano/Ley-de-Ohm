//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <Graphics.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TGroupBox *GroupBox1;
        TGroupBox *GroupBox2;
        TButton *Btn_Calcular;
        TImage *Image1;
        TRadioButton *Rdb_Corriente;
        TRadioButton *Rdb_Voltaje;
        TRadioButton *Rdb_Resistencia;
        TLabel *Label_Corriente;
        TLabel *Label_Voltaje;
        TLabel *Label_Resistencia;
        TLabel *LabelA;
        TLabel *LabelV;
        TLabel *LabelOhms;
        TEdit *Txt_Corriente;
        TEdit *Txt_Voltaje;
        TEdit *Txt_Resistencia;
        TButton *Btn_Salir;
        TLabel *Label_Potencia;
        TEdit *Txt_Potencia;
        TLabel *LabelWatts;
        TRadioButton *Rdb_Potencia;
        void __fastcall Btn_SalirClick(TObject *Sender);
        void __fastcall Rdb_CorrienteClick(TObject *Sender);
        void __fastcall Rdb_VoltajeClick(TObject *Sender);
        void __fastcall Rdb_ResistenciaClick(TObject *Sender);
        void __fastcall Btn_CalcularClick(TObject *Sender);
        void __fastcall Rdb_PotenciaClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
