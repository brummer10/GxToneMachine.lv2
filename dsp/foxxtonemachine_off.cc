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
	fConst1 = (2.86020754678642e-28 * fConst0);
	fConst2 = (2.6297455253571e-18 + (fConst0 * ((fConst0 * (fConst1 - 1.12088147492994e-24)) - 1.25728799965553e-20)));
	fConst3 = (1.25849132058603e-28 * fConst0);
	fConst4 = (1.15708803115712e-18 + (fConst0 * ((fConst0 * (fConst3 - 4.93187848969175e-25)) - 5.53206719848432e-21)));
	fConst5 = (2.46839215917857e-30 * fConst0);
	fConst6 = (1.20754620489914e-16 + (fConst0 * ((fConst0 * (1.32537919824888e-16 + (fConst0 * ((fConst0 * (1.95459832926046e-21 + (fConst0 * (fConst5 - 3.76504423325689e-24)))) - 7.75550148769994e-19)))) - 2.73467867376069e-16)));
	fConst7 = (1.48103529550714e-29 * fConst0);
	fConst8 = faustpower<2>(fConst0);
	fConst9 = (7.24527722939485e-16 + (fConst0 * ((fConst0 * (2.65075839649775e-16 + (fConst8 * ((fConst0 * (1.50601769330275e-23 - fConst7)) - 3.90919665852092e-21)))) - 1.09387146950428e-15)));
	fConst10 = (3.70258823876785e-29 * fConst0);
	fConst11 = (1.81131930734871e-15 + (fConst0 * ((fConst0 * ((fConst0 * (2.32665044630998e-18 + (fConst0 * ((fConst0 * (fConst10 - 1.88252211662844e-23)) - 1.95459832926046e-21)))) - 1.32537919824888e-16)) - 1.36733933688035e-15)));
	fConst12 = (2.41509240979828e-15 + (fConst8 * ((fConst8 * (7.81839331704185e-21 - (4.93678431835713e-29 * fConst8))) - 5.3015167929955e-16)));
	fConst13 = (1.81131930734871e-15 + (fConst0 * (1.36733933688035e-15 + (fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * (1.88252211662844e-23 + fConst10)) - 1.95459832926046e-21)) - 2.32665044630998e-18)) - 1.32537919824888e-16)))));
	fConst14 = (7.24527722939485e-16 + (fConst0 * (1.09387146950428e-15 + (fConst0 * (2.65075839649775e-16 + (fConst8 * ((fConst0 * (0 - (1.50601769330275e-23 + fConst7))) - 3.90919665852092e-21)))))));
	fConst15 = (1.20754620489914e-16 + (fConst0 * (2.73467867376069e-16 + (fConst0 * (1.32537919824888e-16 + (fConst0 * (7.75550148769994e-19 + (fConst0 * (1.95459832926046e-21 + (fConst0 * (3.76504423325689e-24 + fConst5)))))))))));
	fConst16 = (1.0 / fConst15);
	fConst17 = (1.71612452807185e-27 * fConst0);
	fConst18 = (2.51457599931105e-20 + (fConst0 * (4.48352589971977e-24 - fConst17)));
	fConst19 = (7.55094792351616e-28 * fConst0);
	fConst20 = (1.10641343969686e-20 + (fConst0 * (1.9727513958767e-24 - fConst19)));
	fConst21 = (4.29031132017964e-27 * fConst0);
	fConst22 = ((fConst0 * (1.25728799965553e-20 + (fConst0 * (fConst21 - 5.60440737464971e-24)))) - 7.88923657607129e-18);
	fConst23 = (1.88773698087904e-27 * fConst0);
	fConst24 = ((fConst0 * (5.53206719848432e-21 + (fConst0 * (fConst23 - 2.46593924484587e-24)))) - 3.47126409347137e-18);
	fConst25 = (0 - (5.02915199862211e-20 + (5.72041509357285e-27 * fConst8)));
	fConst26 = (0 - (2.21282687939373e-20 + (2.51698264117205e-27 * fConst8)));
	fConst27 = (7.88923657607129e-18 + (fConst0 * (1.25728799965553e-20 + (fConst0 * (5.60440737464971e-24 + fConst21)))));
	fConst28 = (3.47126409347137e-18 + (fConst0 * (5.53206719848432e-21 + (fConst0 * (2.46593924484587e-24 + fConst23)))));
	fConst29 = (2.51457599931105e-20 + (fConst0 * (0 - (4.48352589971977e-24 + fConst17))));
	fConst30 = (1.10641343969686e-20 + (fConst0 * (0 - (1.9727513958767e-24 + fConst19))));
	fConst31 = ((fConst0 * ((fConst0 * (1.12088147492994e-24 + fConst1)) - 1.25728799965553e-20)) - 2.6297455253571e-18);
	fConst32 = ((fConst0 * ((fConst0 * (4.93187848969175e-25 + fConst3)) - 5.53206719848432e-21)) - 1.15708803115712e-18);
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
