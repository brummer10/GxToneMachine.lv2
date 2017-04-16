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
	fConst1 = (8.4391604775626e-28 * fConst0);
	fConst2 = ((fConst0 * (1.96242069191227e-20 + (fConst0 * (fConst1 - 9.59822149319273e-23)))) - 9.36439573316441e-21);
	fConst3 = (3.71323061012754e-30 * fConst0);
	fConst4 = ((fConst0 * (8.63465104441399e-23 + (fConst0 * (fConst3 - 4.2232174570048e-25)))) - 4.12033412259234e-23);
	fConst5 = (7.68397801624626e-31 * fConst0);
	fConst6 = (2.47641744694608e-18 + (fConst0 * ((fConst0 * (1.08078330763926e-17 + (fConst0 * ((fConst0 * (1.1779360870863e-21 + (fConst0 * (fConst5 - 3.86289318208339e-24)))) - 6.19671825210953e-19)))) - 1.02019698436494e-17)));
	fConst7 = (4.61038680974776e-30 * fConst0);
	fConst8 = faustpower<2>(fConst0);
	fConst9 = (1.48585046816765e-17 + (fConst0 * ((fConst0 * (2.16156661527853e-17 + (fConst8 * ((fConst0 * (1.54515727283336e-23 - fConst7)) - 2.3558721741726e-21)))) - 4.08078793745975e-17)));
	fConst10 = (1.15259670243694e-29 * fConst0);
	fConst11 = (3.71462617041912e-17 + (fConst0 * ((fConst0 * ((fConst0 * (1.85901547563286e-18 + (fConst0 * ((fConst0 * (fConst10 - 1.93144659104169e-23)) - 1.1779360870863e-21)))) - 1.08078330763926e-17)) - 5.10098492182469e-17)));
	fConst12 = (4.95283489389217e-17 + (fConst8 * ((fConst8 * (4.7117443483452e-21 - (1.53679560324925e-29 * fConst8))) - 4.32313323055705e-17)));
	fConst13 = (3.71462617041912e-17 + (fConst0 * (5.10098492182469e-17 + (fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * (1.93144659104169e-23 + fConst10)) - 1.1779360870863e-21)) - 1.85901547563286e-18)) - 1.08078330763926e-17)))));
	fConst14 = (1.48585046816765e-17 + (fConst0 * (4.08078793745975e-17 + (fConst0 * (2.16156661527853e-17 + (fConst8 * ((fConst0 * (0 - (1.54515727283336e-23 + fConst7))) - 2.3558721741726e-21)))))));
	fConst15 = (2.47641744694608e-18 + (fConst0 * (1.02019698436494e-17 + (fConst0 * (1.08078330763926e-17 + (fConst0 * (6.19671825210953e-19 + (fConst0 * (1.1779360870863e-21 + (fConst0 * (3.86289318208339e-24 + fConst5)))))))))));
	fConst16 = (1.0 / fConst15);
	fConst17 = (5.06349628653756e-27 * fConst0);
	fConst18 = ((fConst0 * (3.83928859727709e-22 - fConst17)) - 3.92484138382454e-20);
	fConst19 = (2.22793836607653e-29 * fConst0);
	fConst20 = ((fConst0 * (1.68928698280192e-24 - fConst19)) - 1.7269302088828e-22);
	fConst21 = (1.26587407163439e-26 * fConst0);
	fConst22 = (2.80931871994932e-20 + (fConst0 * ((fConst0 * (fConst21 - 4.79911074659637e-22)) - 1.96242069191227e-20)));
	fConst23 = (5.56984591519132e-29 * fConst0);
	fConst24 = (1.2361002367777e-22 + (fConst0 * ((fConst0 * (fConst23 - 2.1116087285024e-24)) - 8.63465104441399e-23)));
	fConst25 = (7.84968276764908e-20 - (1.68783209551252e-26 * fConst8));
	fConst26 = (3.4538604177656e-22 - (7.42646122025509e-29 * fConst8));
	fConst27 = ((fConst0 * ((fConst0 * (4.79911074659637e-22 + fConst21)) - 1.96242069191227e-20)) - 2.80931871994932e-20);
	fConst28 = ((fConst0 * ((fConst0 * (2.1116087285024e-24 + fConst23)) - 8.63465104441399e-23)) - 1.2361002367777e-22);
	fConst29 = ((fConst0 * (0 - (3.83928859727709e-22 + fConst17))) - 3.92484138382454e-20);
	fConst30 = ((fConst0 * (0 - (1.68928698280192e-24 + fConst19))) - 1.7269302088828e-22);
	fConst31 = (9.36439573316441e-21 + (fConst0 * (1.96242069191227e-20 + (fConst0 * (9.59822149319273e-23 + fConst1)))));
	fConst32 = (4.12033412259234e-23 + (fConst0 * (8.63465104441399e-23 + (fConst0 * (4.2232174570048e-25 + fConst3)))));
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
