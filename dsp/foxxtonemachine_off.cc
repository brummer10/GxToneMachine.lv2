// generated from file './/foxxtonemachine_off.dsp' by dsp2cc:
// Code generated with Faust 0.9.73 (http://faust.grame.fr)


namespace foxxtonemachine_off {

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
	fConst2 = (4.00351437319484e-28 * fConst1);
	fConst3 = (7.44955889968015e-18 + (fConst1 * ((fConst1 * (fConst2 - 1.75781000376001e-24)) - 3.57771192649751e-20)));
	fConst4 = (1.76154632420573e-30 * fConst1);
	fConst5 = (3.27780591585927e-20 + (fConst1 * ((fConst1 * (fConst4 - 7.73436401654403e-27)) - 1.5741932476589e-22)));
	fConst6 = (2.02123567638348e-30 * fConst1);
	fConst7 = (1.08674873704911e-15 + (fConst1 * ((fConst1 * (2.9736656543843e-16 + (fConst1 * ((fConst1 * (2.98621627815025e-21 + (fConst1 * (fConst6 - 3.7648758533313e-24)))) - 1.09433097046722e-18)))) - 2.10583540888069e-15)));
	fConst8 = (1.21274140583009e-29 * fConst1);
	fConst9 = faustpower<2>(fConst1);
	fConst10 = (6.52049242229464e-15 + (fConst1 * ((fConst1 * (5.9473313087686e-16 + (fConst9 * ((fConst1 * (1.50595034133252e-23 - fConst8)) - 5.97243255630051e-21)))) - 8.42334163552276e-15)));
	fConst11 = (3.03185351457522e-29 * fConst1);
	fConst12 = (1.63012310557366e-14 + (fConst1 * ((fConst1 * ((fConst1 * (3.28299291140166e-18 + (fConst1 * ((fConst1 * (fConst11 - 1.88243792666565e-23)) - 2.98621627815025e-21)))) - 2.9736656543843e-16)) - 1.05291770444035e-14)));
	fConst13 = (2.17349747409821e-14 + (fConst9 * ((fConst9 * (1.1944865112601e-20 - (4.04247135276696e-29 * fConst9))) - 1.18946626175372e-15)));
	fConst14 = (1.63012310557366e-14 + (fConst1 * (1.05291770444035e-14 + (fConst1 * ((fConst1 * ((fConst1 * ((fConst1 * (1.88243792666565e-23 + fConst11)) - 2.98621627815025e-21)) - 3.28299291140166e-18)) - 2.9736656543843e-16)))));
	fConst15 = (6.52049242229464e-15 + (fConst1 * (8.42334163552276e-15 + (fConst1 * (5.9473313087686e-16 + (fConst9 * ((fConst1 * (0 - (1.50595034133252e-23 + fConst8))) - 5.97243255630051e-21)))))));
	fConst16 = (1.08674873704911e-15 + (fConst1 * (2.10583540888069e-15 + (fConst1 * (2.9736656543843e-16 + (fConst1 * (1.09433097046722e-18 + (fConst1 * (2.98621627815025e-21 + (fConst1 * (3.7648758533313e-24 + fConst6)))))))))));
	fConst17 = (1.0 / fConst16);
	fConst18 = (482.3915519587128 / double(iConst0));
	fConst19 = (1 - fConst18);
	fConst20 = (1.0 / (1 + fConst18));
	fConst21 = (2.4021086239169e-27 * fConst1);
	fConst22 = (7.15542385299502e-20 + (fConst1 * (7.03124001504003e-24 - fConst21)));
	fConst23 = (1.05692779452344e-29 * fConst1);
	fConst24 = (3.14838649531781e-22 + (fConst1 * (3.09374560661761e-26 - fConst23)));
	fConst25 = (6.00527155979226e-27 * fConst1);
	fConst26 = ((fConst1 * (3.57771192649751e-20 + (fConst1 * (fConst25 - 8.78905001880003e-24)))) - 2.23486766990405e-17);
	fConst27 = (2.64231948630859e-29 * fConst1);
	fConst28 = ((fConst1 * (1.5741932476589e-22 + (fConst1 * (fConst27 - 3.86718200827201e-26)))) - 9.8334177475778e-20);
	fConst29 = (0 - (1.431084770599e-19 + (8.00702874638968e-27 * fConst9)));
	fConst30 = (0 - (6.29677299063561e-22 + (3.52309264841146e-29 * fConst9)));
	fConst31 = (2.23486766990405e-17 + (fConst1 * (3.57771192649751e-20 + (fConst1 * (8.78905001880003e-24 + fConst25)))));
	fConst32 = (9.8334177475778e-20 + (fConst1 * (1.5741932476589e-22 + (fConst1 * (3.86718200827201e-26 + fConst27)))));
	fConst33 = (7.15542385299502e-20 + (fConst1 * (0 - (7.03124001504003e-24 + fConst21))));
	fConst34 = (3.14838649531781e-22 + (fConst1 * (0 - (3.09374560661761e-26 + fConst23))));
	fConst35 = ((fConst1 * ((fConst1 * (1.75781000376001e-24 + fConst2)) - 3.57771192649751e-20)) - 7.44955889968015e-18);
	fConst36 = ((fConst1 * ((fConst1 * (7.73436401654403e-27 + fConst4)) - 1.5741932476589e-22)) - 3.27780591585927e-20);
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
		output0[i] = (FAUSTFLOAT)(fConst37 * (((((((fRec1[0] * (fConst36 + (fConst35 * fRec0[0]))) + (fConst1 * (fRec1[1] * (fConst34 + (fConst33 * fRec0[0]))))) + (fRec1[2] * (fConst32 + (fConst31 * fRec0[0])))) + (fConst1 * (fRec1[3] * (fConst30 + (fConst29 * fRec0[0]))))) + (fRec1[4] * (fConst28 + (fConst26 * fRec0[0])))) + (fConst1 * (fRec1[5] * (fConst24 + (fConst22 * fRec0[0]))))) + (fRec1[6] * (fConst5 + (fConst3 * fRec0[0])))));
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

} // end namespace foxxtonemachine_off
