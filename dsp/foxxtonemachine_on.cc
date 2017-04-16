// generated from file './/foxxtonemachine_on.dsp' by dsp2cc:
// Code generated with Faust 0.9.73 (http://faust.grame.fr)


namespace foxxtonemachine_on {

class Dsp: public PluginLV2 {
private:
	uint32_t fSamplingFreq;
	FAUSTFLOAT 	fslider0;
	FAUSTFLOAT	*fslider0_;
	double 	fRec0[2];
	int 	iConst0;
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
	double 	fConst17;
	double 	fConst18;
	double 	fConst19;
	double 	fVec0[2];
	double 	fConst20;
	double 	fRec2[2];
	double 	fRec1[7];
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
	double 	fConst34;
	double 	fConst35;
	double 	fConst36;
	double 	fConst37;
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
	for (int i=0; i<2; i++) fVec0[i] = 0;
	for (int i=0; i<2; i++) fRec2[i] = 0;
	for (int i=0; i<7; i++) fRec1[i] = 0;
}

void Dsp::clear_state_f_static(PluginLV2 *p)
{
	static_cast<Dsp*>(p)->clear_state_f();
}

inline void Dsp::init(uint32_t samplingFreq)
{
	fSamplingFreq = samplingFreq;
	iConst0 = min(192000, max(1, fSamplingFreq));
	fConst1 = double(iConst0);
	fConst2 = (8.40434931515929e-28 * fConst1);
	fConst3 = ((fConst1 * (2.40718545979768e-20 + (fConst1 * (fConst2 - 9.56278940845583e-23)))) - 9.32576801639831e-19);
	fConst4 = (3.69791369867009e-30 * fConst1);
	fConst5 = ((fConst1 * (1.05916160231098e-22 + (fConst1 * (fConst4 - 4.20762733972057e-25)))) - 4.10333792721526e-21);
	fConst6 = (7.65228197485734e-31 * fConst1);
	fConst7 = (2.46620233490631e-15 + (fConst1 * ((fConst1 * (1.38744680575899e-16 + (fConst1 * ((fConst1 * (1.93753759854166e-21 + (fConst1 * (fConst6 - 3.84711102148804e-24)))) - 8.68762617002195e-19)))) - 5.03283537822102e-15)));
	fConst8 = (4.59136918491441e-30 * fConst1);
	fConst9 = faustpower<2>(fConst1);
	fConst10 = (1.47972140094378e-14 + (fConst1 * ((fConst1 * (2.77489361151798e-16 + (fConst9 * ((fConst1 * (1.53884440859521e-23 - fConst8)) - 3.87507519708332e-21)))) - 2.01313415128841e-14)));
	fConst11 = (1.1478422962286e-29 * fConst1);
	fConst12 = (3.69930350235946e-14 + (fConst1 * ((fConst1 * ((fConst1 * (2.60628785100659e-18 + (fConst1 * ((fConst1 * (fConst11 - 1.92355551074402e-23)) - 1.93753759854166e-21)))) - 1.38744680575899e-16)) - 2.51641768911051e-14)));
	fConst13 = (4.93240466981261e-14 + (fConst9 * ((fConst9 * (7.75015039416663e-21 - (1.53045639497147e-29 * fConst9))) - 5.54978722303597e-16)));
	fConst14 = (3.69930350235946e-14 + (fConst1 * (2.51641768911051e-14 + (fConst1 * ((fConst1 * ((fConst1 * ((fConst1 * (1.92355551074402e-23 + fConst11)) - 1.93753759854166e-21)) - 2.60628785100659e-18)) - 1.38744680575899e-16)))));
	fConst15 = (1.47972140094378e-14 + (fConst1 * (2.01313415128841e-14 + (fConst1 * (2.77489361151798e-16 + (fConst9 * ((fConst1 * (0 - (1.53884440859521e-23 + fConst8))) - 3.87507519708332e-21)))))));
	fConst16 = (2.46620233490631e-15 + (fConst1 * (5.03283537822102e-15 + (fConst1 * (1.38744680575899e-16 + (fConst1 * (8.68762617002195e-19 + (fConst1 * (1.93753759854166e-21 + (fConst1 * (3.84711102148804e-24 + fConst6)))))))))));
	fConst17 = (1.0 / fConst16);
	fConst18 = (444.50394455641987 / double(iConst0));
	fConst19 = (1 - fConst18);
	fConst20 = (1.0 / (1 + fConst18));
	fConst21 = (5.04260958909557e-27 * fConst1);
	fConst22 = ((fConst1 * (3.82511576338233e-22 - fConst21)) - 4.81437091959536e-20);
	fConst23 = (2.21874821920205e-29 * fConst1);
	fConst24 = ((fConst1 * (1.68305093588823e-24 - fConst23)) - 2.11832320462196e-22);
	fConst25 = (1.26065239727389e-26 * fConst1);
	fConst26 = (2.79773040491949e-18 + (fConst1 * ((fConst1 * (fConst25 - 4.78139470422792e-22)) - 2.40718545979768e-20)));
	fConst27 = (5.54687054800513e-29 * fConst1);
	fConst28 = (1.23100137816458e-20 + (fConst1 * ((fConst1 * (fConst27 - 2.10381366986028e-24)) - 1.05916160231098e-22)));
	fConst29 = (9.62874183919072e-20 - (1.68086986303186e-26 * fConst9));
	fConst30 = (4.23664640924392e-22 - (7.39582739734018e-29 * fConst9));
	fConst31 = ((fConst1 * ((fConst1 * (4.78139470422792e-22 + fConst25)) - 2.40718545979768e-20)) - 2.79773040491949e-18);
	fConst32 = ((fConst1 * ((fConst1 * (2.10381366986028e-24 + fConst27)) - 1.05916160231098e-22)) - 1.23100137816458e-20);
	fConst33 = ((fConst1 * (0 - (3.82511576338233e-22 + fConst21))) - 4.81437091959536e-20);
	fConst34 = ((fConst1 * (0 - (1.68305093588823e-24 + fConst23))) - 2.11832320462196e-22);
	fConst35 = (9.32576801639831e-19 + (fConst1 * (2.40718545979768e-20 + (fConst1 * (9.56278940845583e-23 + fConst2)))));
	fConst36 = (4.10333792721526e-21 + (fConst1 * (1.05916160231098e-22 + (fConst1 * (4.20762733972057e-25 + fConst4)))));
	fConst37 = (faustpower<3>(fConst1) / fConst16);
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
		double fTemp0 = (double)input0[i];
		fVec0[0] = fTemp0;
		fRec2[0] = (fConst20 * ((fVec0[0] - fVec0[1]) + (fConst19 * fRec2[1])));
		fRec1[0] = (fRec2[0] - (fConst17 * ((((((fConst15 * fRec1[1]) + (fConst14 * fRec1[2])) + (fConst13 * fRec1[3])) + (fConst12 * fRec1[4])) + (fConst10 * fRec1[5])) + (fConst7 * fRec1[6]))));
		double fTemp1 = (FAUSTFLOAT)(fConst37 * (((((((fRec1[0] * (fConst36 + (fConst35 * fRec0[0]))) + (fConst1 * (fRec1[1] * (fConst34 + (fConst33 * fRec0[0]))))) + (fRec1[2] * (fConst32 + (fConst31 * fRec0[0])))) + (fConst1 * (fRec1[3] * (fConst30 + (fConst29 * fRec0[0]))))) + (fRec1[4] * (fConst28 + (fConst26 * fRec0[0])))) + (fConst1 * (fRec1[5] * (fConst24 + (fConst22 * fRec0[0]))))) + (fRec1[6] * (fConst5 + (fConst3 * fRec0[0])))));
		output0[i] = fTemp1 * 0.333;
		// post processing
		for (int i=6; i>0; i--) fRec1[i] = fRec1[i-1];
		fRec2[1] = fRec2[0];
		fVec0[1] = fVec0[0];
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
