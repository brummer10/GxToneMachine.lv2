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
	fConst1 = (3.91152352379332e-28 * fConst0);
	fConst2 = (3.59634761551375e-18 + (fConst0 * ((fConst0 * (fConst1 - 1.53288016383691e-24)) - 1.71942287785488e-20)));
	fConst3 = (1.72107035046906e-30 * fConst0);
	fConst4 = (1.58239295082605e-20 + (fConst0 * ((fConst0 * (fConst3 - 6.74467272088239e-27)) - 7.56546066256149e-23)));
	fConst5 = (2.39272285097601e-30 * fConst0);
	fConst6 = (1.65139778318933e-16 + (fConst0 * ((fConst0 * (1.30190362583026e-16 + (fConst0 * ((fConst0 * (1.94053435748213e-21 + (fConst0 * (fConst5 - 3.76897065274471e-24)))) - 7.72619278657236e-19)))) - 4.01826597310634e-16)));
	fConst7 = (1.4356337105856e-29 * fConst0);
	fConst8 = faustpower<2>(fConst0);
	fConst9 = (9.90838669913598e-16 + (fConst0 * ((fConst0 * (2.60380725166053e-16 + (fConst8 * ((fConst0 * (1.50758826109788e-23 - fConst7)) - 3.88106871496426e-21)))) - 1.60730638924254e-15)));
	fConst10 = (3.58908427646401e-29 * fConst0);
	fConst11 = (2.477096674784e-15 + (fConst0 * ((fConst0 * ((fConst0 * (2.31785783597171e-18 + (fConst0 * ((fConst0 * (fConst10 - 1.88448532637235e-23)) - 1.94053435748213e-21)))) - 1.30190362583026e-16)) - 2.00913298655317e-15)));
	fConst12 = (3.30279556637866e-15 + (fConst8 * ((fConst8 * (7.76213742992852e-21 - (4.78544570195201e-29 * fConst8))) - 5.20761450332106e-16)));
	fConst13 = (2.477096674784e-15 + (fConst0 * (2.00913298655317e-15 + (fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * (1.88448532637235e-23 + fConst10)) - 1.94053435748213e-21)) - 2.31785783597171e-18)) - 1.30190362583026e-16)))));
	fConst14 = (9.90838669913598e-16 + (fConst0 * (1.60730638924254e-15 + (fConst0 * (2.60380725166053e-16 + (fConst8 * ((fConst0 * (0 - (1.50758826109788e-23 + fConst7))) - 3.88106871496426e-21)))))));
	fConst15 = (1.65139778318933e-16 + (fConst0 * (4.01826597310634e-16 + (fConst0 * (1.30190362583026e-16 + (fConst0 * (7.72619278657236e-19 + (fConst0 * (1.94053435748213e-21 + (fConst0 * (3.76897065274471e-24 + fConst5)))))))))));
	fConst16 = (1.0 / fConst15);
	fConst17 = (2.34691411427599e-27 * fConst0);
	fConst18 = (3.43884575570977e-20 + (fConst0 * (6.13152065534763e-24 - fConst17)));
	fConst19 = (1.03264221028144e-29 * fConst0);
	fConst20 = (1.5130921325123e-22 + (fConst0 * (2.69786908835296e-26 - fConst19)));
	fConst21 = (5.86728528568998e-27 * fConst0);
	fConst22 = ((fConst0 * (1.71942287785488e-20 + (fConst0 * (fConst21 - 7.66440081918453e-24)))) - 1.07890428465413e-17);
	fConst23 = (2.58160552570359e-29 * fConst0);
	fConst24 = ((fConst0 * (7.56546066256149e-23 + (fConst0 * (fConst23 - 3.37233636044119e-26)))) - 4.74717885247816e-20);
	fConst25 = (0 - (6.87769151141954e-20 + (7.82304704758664e-27 * fConst8)));
	fConst26 = (0 - (3.0261842650246e-22 + (3.44214070093812e-29 * fConst8)));
	fConst27 = (1.07890428465413e-17 + (fConst0 * (1.71942287785488e-20 + (fConst0 * (7.66440081918453e-24 + fConst21)))));
	fConst28 = (4.74717885247816e-20 + (fConst0 * (7.56546066256149e-23 + (fConst0 * (3.37233636044119e-26 + fConst23)))));
	fConst29 = (3.43884575570977e-20 + (fConst0 * (0 - (6.13152065534763e-24 + fConst17))));
	fConst30 = (1.5130921325123e-22 + (fConst0 * (0 - (2.69786908835296e-26 + fConst19))));
	fConst31 = ((fConst0 * ((fConst0 * (1.53288016383691e-24 + fConst1)) - 1.71942287785488e-20)) - 3.59634761551375e-18);
	fConst32 = ((fConst0 * ((fConst0 * (6.74467272088239e-27 + fConst3)) - 7.56546066256149e-23)) - 1.58239295082605e-20);
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
