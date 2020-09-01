#pragma once
#include <mutex>

class asciiface {

public:
	void show(); 
	void change_wenkbrouwen();
	void change_mond(); 
	void change_ogen();
	enum type_wenkbrouwen { w_lief, w_neutraal, w_boos };
	enum type_ogen { o_open, o_dicht };
	enum type_mond { m_open, m_dicht, m_boos };
private:
	type_wenkbrouwen wenkbrouwen = w_lief;
	type_ogen ogen = o_open;
	type_mond mond = m_dicht;
};




