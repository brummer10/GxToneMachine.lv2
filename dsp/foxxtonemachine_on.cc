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
	fConst1 = (6.36999876695549e-28 * fConst0);
	fConst2 = ((fConst0 * (1.48123635437846e-20 + (fConst0 * (fConst1 - 7.24474070701531e-23)))) - 7.06825184506108e-21);
	fConst3 = (2.80279945746042e-28 * fConst0);
	fConst4 = ((fConst0 * (6.51743995926522e-21 + (fConst0 * (fConst3 - 3.18768591108674e-23)))) - 3.11003081182687e-21);
	fConst5 = (9.24463114810287e-31 * fConst0);
	fConst6 = (1.8760743333002e-18 + (fConst0 * ((fConst0 * (6.50333298408577e-18 + (fConst0 * ((fConst0 * (1.15653106625726e-21 + (fConst0 * (fConst5 - 3.85585253815661e-24)))) - 6.09270995021584e-19)))) - 6.85171844366976e-18)));
	fConst7 = (5.54677868886172e-30 * fConst0);
	fConst8 = faustpower<2>(fConst0);
	fConst9 = (1.12564459998012e-17 + (fConst0 * ((fConst0 * (1.30066659681715e-17 + (fConst8 * ((fConst0 * (1.54234101526264e-23 - fConst7)) - 2.31306213251452e-21)))) - 2.7406873774679e-17)));
	fConst10 = (1.38669467221543e-29 * fConst0);
	fConst11 = (2.81411149995029e-17 + (fConst0 * ((fConst0 * ((fConst0 * (1.82781298506475e-18 + (fConst0 * ((fConst0 * (fConst10 - 1.9279262690783e-23)) - 1.15653106625726e-21)))) - 6.50333298408577e-18)) - 3.42585922183488e-17)));
	fConst12 = (3.75214866660039e-17 + (fConst8 * ((fConst8 * (4.62612426502904e-21 - (1.84892622962057e-29 * fConst8))) - 2.60133319363431e-17)));
	fConst13 = (2.81411149995029e-17 + (fConst0 * (3.42585922183488e-17 + (fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * (1.9279262690783e-23 + fConst10)) - 1.15653106625726e-21)) - 1.82781298506475e-18)) - 6.50333298408577e-18)))));
	fConst14 = (1.12564459998012e-17 + (fConst0 * (2.7406873774679e-17 + (fConst0 * (1.30066659681715e-17 + (fConst8 * ((fConst0 * (0 - (1.54234101526264e-23 + fConst7))) - 2.31306213251452e-21)))))));
	fConst15 = (1.8760743333002e-18 + (fConst0 * (6.85171844366976e-18 + (fConst0 * (6.50333298408577e-18 + (fConst0 * (6.09270995021584e-19 + (fConst0 * (1.15653106625726e-21 + (fConst0 * (3.85585253815661e-24 + fConst5)))))))))));
	fConst16 = (1.0 / fConst15);
	fConst17 = (3.8219992601733e-27 * fConst0);
	fConst18 = ((fConst0 * (2.89789628280612e-22 - fConst17)) - 2.96247270875692e-20);
	fConst19 = (1.68167967447625e-27 * fConst0);
	fConst20 = ((fConst0 * (1.27507436443469e-22 - fConst19)) - 1.30348799185304e-20);
	fConst21 = (9.55499815043324e-27 * fConst0);
	fConst22 = (2.12047555351832e-20 + (fConst0 * ((fConst0 * (fConst21 - 3.62237035350766e-22)) - 1.48123635437846e-20)));
	fConst23 = (4.20419918619063e-27 * fConst0);
	fConst24 = (9.33009243548063e-21 + (fConst0 * ((fConst0 * (fConst23 - 1.59384295554337e-22)) - 6.51743995926522e-21)));
	fConst25 = (5.92494541751383e-20 - (1.2739997533911e-26 * fConst8));
	fConst26 = (2.60697598370609e-20 - (5.60559891492083e-27 * fConst8));
	fConst27 = ((fConst0 * ((fConst0 * (3.62237035350766e-22 + fConst21)) - 1.48123635437846e-20)) - 2.12047555351832e-20);
	fConst28 = ((fConst0 * ((fConst0 * (1.59384295554337e-22 + fConst23)) - 6.51743995926522e-21)) - 9.33009243548063e-21);
	fConst29 = ((fConst0 * (0 - (2.89789628280612e-22 + fConst17))) - 2.96247270875692e-20);
	fConst30 = ((fConst0 * (0 - (1.27507436443469e-22 + fConst19))) - 1.30348799185304e-20);
	fConst31 = (7.06825184506108e-21 + (fConst0 * (1.48123635437846e-20 + (fConst0 * (7.24474070701531e-23 + fConst1)))));
	fConst32 = (3.11003081182687e-21 + (fConst0 * (6.51743995926522e-21 + (fConst0 * (3.18768591108674e-23 + fConst3)))));
	fConst33 = (0.75 * (faustpower<3>(fConst0) / fConst15));
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
