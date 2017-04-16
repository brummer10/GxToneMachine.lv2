// generated from file './/foxxtonemachine_off.dsp' by dsp2cc:
// Code generated with Faust 0.9.73 (http://faust.grame.fr)


namespace foxxtonemachine_off {

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
	id = "foxtonemachine";
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
	fConst1 = (4.02614365427143e-28 * fConst0);
	fConst2 = (3.70237145456252e-18 + (fConst0 * ((fConst0 * (fConst1 - 1.72849022869512e-24)) - 1.76702466144349e-20)));
	fConst3 = (1.77150320787943e-30 * fConst0);
	fConst4 = (1.62904344000751e-20 + (fConst0 * ((fConst0 * (fConst3 - 7.60535700625855e-27)) - 7.77490851035137e-23)));
	fConst5 = (2.03266039141598e-30 * fConst0);
	fConst6 = (1.69507458002547e-16 + (fConst0 * ((fConst0 * (1.33612998385395e-16 + (fConst0 * ((fConst0 * (1.95485384062061e-21 + (fConst0 * (fConst5 - 3.78594833219408e-24)))) - 7.88666854806111e-19)))) - 4.12444367733469e-16)));
	fConst7 = (1.21959623484959e-29 * fConst0);
	fConst8 = faustpower<2>(fConst0);
	fConst9 = (1.01704474801528e-15 + (fConst0 * ((fConst0 * (2.6722599677079e-16 + (fConst8 * ((fConst0 * (1.51437933287763e-23 - fConst7)) - 3.90970768124122e-21)))) - 1.64977747093388e-15)));
	fConst10 = (3.04899058712397e-29 * fConst0);
	fConst11 = (2.54261187003821e-15 + (fConst0 * ((fConst0 * ((fConst0 * (2.36600056441833e-18 + (fConst0 * ((fConst0 * (fConst10 - 1.89297416609704e-23)) - 1.95485384062061e-21)))) - 1.33612998385395e-16)) - 2.06222183866734e-15)));
	fConst12 = (3.39014916005095e-15 + (fConst8 * ((fConst8 * (7.81941536248244e-21 - (4.06532078283196e-29 * fConst8))) - 5.34451993541579e-16)));
	fConst13 = (2.54261187003821e-15 + (fConst0 * (2.06222183866734e-15 + (fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * (1.89297416609704e-23 + fConst10)) - 1.95485384062061e-21)) - 2.36600056441833e-18)) - 1.33612998385395e-16)))));
	fConst14 = (1.01704474801528e-15 + (fConst0 * (1.64977747093388e-15 + (fConst0 * (2.6722599677079e-16 + (fConst8 * ((fConst0 * (0 - (1.51437933287763e-23 + fConst7))) - 3.90970768124122e-21)))))));
	fConst15 = (1.69507458002547e-16 + (fConst0 * (4.12444367733469e-16 + (fConst0 * (1.33612998385395e-16 + (fConst0 * (7.88666854806111e-19 + (fConst0 * (1.95485384062061e-21 + (fConst0 * (3.78594833219408e-24 + fConst5)))))))))));
	fConst16 = (1.0 / fConst15);
	fConst17 = (2.41568619256286e-27 * fConst0);
	fConst18 = (3.53404932288699e-20 + (fConst0 * (6.9139609147805e-24 - fConst17)));
	fConst19 = (1.06290192472766e-29 * fConst0);
	fConst20 = (1.55498170207027e-22 + (fConst0 * (3.04214280250342e-26 - fConst19)));
	fConst21 = (6.03921548140715e-27 * fConst0);
	fConst22 = ((fConst0 * (1.76702466144349e-20 + (fConst0 * (fConst21 - 8.64245114347562e-24)))) - 1.11071143636876e-17);
	fConst23 = (2.65725481181915e-29 * fConst0);
	fConst24 = ((fConst0 * (7.77490851035137e-23 + (fConst0 * (fConst23 - 3.80267850312927e-26)))) - 4.88713032002253e-20);
	fConst25 = (0 - (7.06809864577397e-20 + (8.05228730854287e-27 * fConst8)));
	fConst26 = (0 - (3.10996340414055e-22 + (3.54300641575886e-29 * fConst8)));
	fConst27 = (1.11071143636876e-17 + (fConst0 * (1.76702466144349e-20 + (fConst0 * (8.64245114347562e-24 + fConst21)))));
	fConst28 = (4.88713032002253e-20 + (fConst0 * (7.77490851035137e-23 + (fConst0 * (3.80267850312927e-26 + fConst23)))));
	fConst29 = (3.53404932288699e-20 + (fConst0 * (0 - (6.9139609147805e-24 + fConst17))));
	fConst30 = (1.55498170207027e-22 + (fConst0 * (0 - (3.04214280250342e-26 + fConst19))));
	fConst31 = ((fConst0 * ((fConst0 * (1.72849022869512e-24 + fConst1)) - 1.76702466144349e-20)) - 3.70237145456252e-18);
	fConst32 = ((fConst0 * ((fConst0 * (7.60535700625855e-27 + fConst3)) - 7.77490851035137e-23)) - 1.62904344000751e-20);
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

} // end namespace foxxtonemachine_off
