// generated from file './/foxxtonemachine_on.dsp' by dsp2cc:
// Code generated with Faust 0.9.73 (http://faust.grame.fr)


namespace foxxtonemachine_on {

class Dsp: public PluginLV2 {
private:
	uint32_t fSamplingFreq;
	FAUSTFLOAT 	fslider0;
	FAUSTFLOAT	*fslider0_;
	double 	fRec0[2];
	double 	fConst0;
	double 	fConst1;
	double 	fConst2;
	double 	fConst3;
	double 	fConst4;
	double 	fConst5;
	double 	fConst6;
	double 	fConst7;
	double 	fConst8;
	double 	fConst9;
	double 	fConst10;
	double 	fConst11;
	double 	fConst12;
	double 	fConst13;
	double 	fConst14;
	double 	fConst15;
	double 	fConst16;
	double 	fRec1[7];
	double 	fConst17;
	double 	fConst18;
	double 	fConst19;
	double 	fConst20;
	double 	fConst21;
	double 	fConst22;
	double 	fConst23;
	double 	fConst24;
	double 	fConst25;
	double 	fConst26;
	double 	fConst27;
	double 	fConst28;
	double 	fConst29;
	double 	fConst30;
	double 	fConst31;
	double 	fConst32;
	double 	fConst33;
	void connect(uint32_t port,void* data);
	void clear_state_f();
	void init(uint32_t samplingFreq);
	void compute(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0);

	static void clear_state_f_static(PluginLV2*);
	static void init_static(uint32_t samplingFreq, PluginLV2*);
	static void compute_static(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0, PluginLV2*);
	static void del_instance(PluginLV2 *p);
	static void connect_static(uint32_t port,void* data, PluginLV2 *p);
public:
	Dsp();
	~Dsp();
};



Dsp::Dsp()
	: PluginLV2() {
	version = PLUGINLV2_VERSION;
	id = "foxtonemachine_on";
	name = N_("foxtonemachine");
	mono_audio = compute_static;
	stereo_audio = 0;
	set_samplerate = init_static;
	activate_plugin = 0;
	connect_ports = connect_static;
	clear_state = clear_state_f_static;
	delete_instance = del_instance;
}

Dsp::~Dsp() {
}

inline void Dsp::clear_state_f()
{
	for (int i=0; i<2; i++) fRec0[i] = 0;
	for (int i=0; i<7; i++) fRec1[i] = 0;
}

void Dsp::clear_state_f_static(PluginLV2 *p)
{
	static_cast<Dsp*>(p)->clear_state_f();
}

inline void Dsp::init(uint32_t samplingFreq)
{
	fSamplingFreq = samplingFreq;
	fConst0 = double(min(192000, max(1, fSamplingFreq)));
	fConst1 = (8.37119607883015e-28 * fConst0);
	fConst2 = ((fConst0 * (1.94658121849555e-20 + (fConst0 * (fConst1 - 9.52074674069401e-23)))) - 9.28881217944852e-21);
	fConst3 = (3.68332627468526e-30 * fConst0);
	fConst4 = ((fConst0 * (8.56495736138044e-23 + (fConst0 * (fConst3 - 4.18912856590537e-25)))) - 4.08707735895735e-23);
	fConst5 = (9.24326000743511e-31 * fConst0);
	fConst6 = (2.46546139056725e-18 + (fConst0 * ((fConst0 * (1.07604124280973e-17 + (fConst0 * ((fConst0 * (1.18381597926426e-21 + (fConst0 * (fConst5 - 3.85528723057034e-24)))) - 6.17138877722921e-19)))) - 1.01569786048045e-17)));
	fConst7 = (5.54595600446106e-30 * fConst0);
	fConst8 = faustpower<2>(fConst0);
	fConst9 = (1.47927683434035e-17 + (fConst0 * ((fConst0 * (2.15208248561946e-17 + (fConst8 * ((fConst0 * (1.54211489222814e-23 - fConst7)) - 2.36763195852851e-21)))) - 4.06279144192179e-17)));
	fConst10 = (1.38648900111527e-29 * fConst0);
	fConst11 = (3.69819208585088e-17 + (fConst0 * ((fConst0 * ((fConst0 * (1.85141663316876e-18 + (fConst0 * ((fConst0 * (fConst10 - 1.92764361528517e-23)) - 1.18381597926426e-21)))) - 1.07604124280973e-17)) - 5.07848930240223e-17)));
	fConst12 = (4.93092278113451e-17 + (fConst8 * ((fConst8 * (4.73526391705702e-21 - (1.84865200148702e-29 * fConst8))) - 4.30416497123893e-17)));
	fConst13 = (3.69819208585088e-17 + (fConst0 * (5.07848930240223e-17 + (fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * (1.92764361528517e-23 + fConst10)) - 1.18381597926426e-21)) - 1.85141663316876e-18)) - 1.07604124280973e-17)))));
	fConst14 = (1.47927683434035e-17 + (fConst0 * (4.06279144192179e-17 + (fConst0 * (2.15208248561946e-17 + (fConst8 * ((fConst0 * (0 - (1.54211489222814e-23 + fConst7))) - 2.36763195852851e-21)))))));
	fConst15 = (2.46546139056725e-18 + (fConst0 * (1.01569786048045e-17 + (fConst0 * (1.07604124280973e-17 + (fConst0 * (6.17138877722921e-19 + (fConst0 * (1.18381597926426e-21 + (fConst0 * (3.85528723057034e-24 + fConst5)))))))))));
	fConst16 = (1.0 / fConst15);
	fConst17 = (5.02271764729809e-27 * fConst0);
	fConst18 = ((fConst0 * (3.80829869627761e-22 - fConst17)) - 3.89316243699111e-20);
	fConst19 = (2.20999576481116e-29 * fConst0);
	fConst20 = ((fConst0 * (1.67565142636215e-24 - fConst19)) - 1.71299147227609e-22);
	fConst21 = (1.25567941182452e-26 * fConst0);
	fConst22 = (2.78664365383456e-20 + (fConst0 * ((fConst0 * (fConst21 - 4.76037337034701e-22)) - 1.94658121849555e-20)));
	fConst23 = (5.5249894120279e-29 * fConst0);
	fConst24 = (1.2261232076872e-22 + (fConst0 * ((fConst0 * (fConst23 - 2.09456428295268e-24)) - 8.56495736138044e-23)));
	fConst25 = (7.78632487398222e-20 - (1.67423921576603e-26 * fConst8));
	fConst26 = (3.42598294455218e-22 - (7.36665254937053e-29 * fConst8));
	fConst27 = ((fConst0 * ((fConst0 * (4.76037337034701e-22 + fConst21)) - 1.94658121849555e-20)) - 2.78664365383456e-20);
	fConst28 = ((fConst0 * ((fConst0 * (2.09456428295268e-24 + fConst23)) - 8.56495736138044e-23)) - 1.2261232076872e-22);
	fConst29 = ((fConst0 * (0 - (3.80829869627761e-22 + fConst17))) - 3.89316243699111e-20);
	fConst30 = ((fConst0 * (0 - (1.67565142636215e-24 + fConst19))) - 1.71299147227609e-22);
	fConst31 = (9.28881217944852e-21 + (fConst0 * (1.94658121849555e-20 + (fConst0 * (9.52074674069401e-23 + fConst1)))));
	fConst32 = (4.08707735895735e-23 + (fConst0 * (8.56495736138044e-23 + (fConst0 * (4.18912856590537e-25 + fConst3)))));
	fConst33 = (faustpower<3>(fConst0) / fConst15);
	clear_state_f();
}

void Dsp::init_static(uint32_t samplingFreq, PluginLV2 *p)
{
	static_cast<Dsp*>(p)->init(samplingFreq);
}

void always_inline Dsp::compute(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0)
{
#define fslider0 (*fslider0_)
	double 	fSlow0 = (0.007000000000000006 * double(fslider0));
	for (int i=0; i<count; i++) {
		fRec0[0] = ((0.993 * fRec0[1]) + fSlow0);
		fRec1[0] = ((double)input0[i] - (fConst16 * ((((((fConst14 * fRec1[1]) + (fConst13 * fRec1[2])) + (fConst12 * fRec1[3])) + (fConst11 * fRec1[4])) + (fConst9 * fRec1[5])) + (fConst6 * fRec1[6]))));
		output0[i] = (FAUSTFLOAT)(fConst33 * (((((((fRec1[0] * (fConst32 + (fConst31 * fRec0[0]))) + (fConst0 * (fRec1[1] * (fConst30 + (fConst29 * fRec0[0]))))) + (fRec1[2] * (fConst28 + (fConst27 * fRec0[0])))) + (fConst0 * (fRec1[3] * (fConst26 + (fConst25 * fRec0[0]))))) + (fRec1[4] * (fConst24 + (fConst22 * fRec0[0])))) + (fConst0 * (fRec1[5] * (fConst20 + (fConst18 * fRec0[0]))))) + (fRec1[6] * (fConst4 + (fConst2 * fRec0[0])))));
		// post processing
		for (int i=6; i>0; i--) fRec1[i] = fRec1[i-1];
		fRec0[1] = fRec0[0];
	}
#undef fslider0
}

void __rt_func Dsp::compute_static(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0, PluginLV2 *p)
{
	static_cast<Dsp*>(p)->compute(count, input0, output0);
}


void Dsp::connect(uint32_t port,void* data)
{
	switch ((PortIndex)port)
	{
	case SUSTAIN: 
		fslider0_ = (float*)data; // , 0.5, 0.0, 1.0, 0.01 
		break;
	default:
		break;
	}
}

void Dsp::connect_static(uint32_t port,void* data, PluginLV2 *p)
{
	static_cast<Dsp*>(p)->connect(port, data);
}


PluginLV2 *plugin() {
	return new Dsp();
}

void Dsp::del_instance(PluginLV2 *p)
{
	delete static_cast<Dsp*>(p);
}

/*
typedef enum
{
   SUSTAIN, 
} PortIndex;
*/

} // end namespace foxxtonemachine_on
