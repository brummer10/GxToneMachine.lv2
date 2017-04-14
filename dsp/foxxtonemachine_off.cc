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
	fConst1 = (3.91082917797608e-28 * fConst0);
	fConst2 = (3.59571295505845e-18 + (fConst0 * ((fConst0 * (fConst1 - 1.53260689306684e-24)) - 1.71911949092038e-20)));
	fConst3 = (1.72076483830947e-30 * fConst0);
	fConst4 = (1.58211370022572e-20 + (fConst0 * ((fConst0 * (fConst3 - 6.74347032949411e-27)) - 7.56412576004969e-23)));
	fConst5 = (2.39229976810674e-30 * fConst0);
	fConst6 = (1.65110634882627e-15 + (fConst0 * ((fConst0 * (1.3676182299914e-16 + (fConst0 * ((fConst0 * (1.97224675445086e-21 + (fConst0 * (fConst5 - 3.768323067299e-24)))) - 7.89113277769429e-19)))) - 1.52743449859697e-15)));
	fConst7 = (1.43537986086404e-29 * fConst0);
	fConst8 = faustpower<2>(fConst0);
	fConst9 = (9.90663809295764e-15 + (fConst0 * ((fConst0 * (2.7352364599828e-16 + (fConst8 * ((fConst0 * (1.5073292269196e-23 - fConst7)) - 3.94449350890172e-21)))) - 6.10973799438787e-15)));
	fConst10 = (3.5884496521601e-29 * fConst0);
	fConst11 = (2.47665952323941e-14 + (fConst0 * ((fConst0 * ((fConst0 * (2.36733983330829e-18 + (fConst0 * ((fConst0 * (fConst10 - 1.8841615336495e-23)) - 1.97224675445086e-21)))) - 1.3676182299914e-16)) - 7.63717249298484e-15)));
	fConst12 = (3.30221269765255e-14 + (fConst8 * ((fConst8 * (7.88898701780343e-21 - (4.78459953621347e-29 * fConst8))) - 5.47047291996561e-16)));
	fConst13 = (2.47665952323941e-14 + (fConst0 * (7.63717249298484e-15 + (fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * (1.8841615336495e-23 + fConst10)) - 1.97224675445086e-21)) - 2.36733983330829e-18)) - 1.3676182299914e-16)))));
	fConst14 = (9.90663809295764e-15 + (fConst0 * (6.10973799438787e-15 + (fConst0 * (2.7352364599828e-16 + (fConst8 * ((fConst0 * (0 - (1.5073292269196e-23 + fConst7))) - 3.94449350890172e-21)))))));
	fConst15 = (1.65110634882627e-15 + (fConst0 * (1.52743449859697e-15 + (fConst0 * (1.3676182299914e-16 + (fConst0 * (7.89113277769429e-19 + (fConst0 * (1.97224675445086e-21 + (fConst0 * (3.768323067299e-24 + fConst5)))))))))));
	fConst16 = (1.0 / fConst15);
	fConst17 = (2.34649750678565e-27 * fConst0);
	fConst18 = (3.43823898184077e-20 + (fConst0 * (6.13042757226737e-24 - fConst17)));
	fConst19 = (1.03245890298568e-29 * fConst0);
	fConst20 = (1.51282515200994e-22 + (fConst0 * (2.69738813179764e-26 - fConst19)));
	fConst21 = (5.86624376696412e-27 * fConst0);
	fConst22 = ((fConst0 * (1.71911949092038e-20 + (fConst0 * (fConst21 - 7.66303446533422e-24)))) - 1.07871388651754e-17);
	fConst23 = (2.58114725746421e-29 * fConst0);
	fConst24 = ((fConst0 * (7.56412576004969e-23 + (fConst0 * (fConst23 - 3.37173516474706e-26)))) - 4.74634110067716e-20);
	fConst25 = (0 - (6.87647796368154e-20 + (7.82165835595215e-27 * fConst8)));
	fConst26 = (0 - (3.02565030401988e-22 + (3.44152967661895e-29 * fConst8)));
	fConst27 = (1.07871388651754e-17 + (fConst0 * (1.71911949092038e-20 + (fConst0 * (7.66303446533422e-24 + fConst21)))));
	fConst28 = (4.74634110067716e-20 + (fConst0 * (7.56412576004969e-23 + (fConst0 * (3.37173516474706e-26 + fConst23)))));
	fConst29 = (3.43823898184077e-20 + (fConst0 * (0 - (6.13042757226737e-24 + fConst17))));
	fConst30 = (1.51282515200994e-22 + (fConst0 * (0 - (2.69738813179764e-26 + fConst19))));
	fConst31 = ((fConst0 * ((fConst0 * (1.53260689306684e-24 + fConst1)) - 1.71911949092038e-20)) - 3.59571295505845e-18);
	fConst32 = ((fConst0 * ((fConst0 * (6.74347032949411e-27 + fConst3)) - 7.56412576004969e-23)) - 1.58211370022572e-20);
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
