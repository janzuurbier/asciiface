#include "asciiface.h"
#include <iostream>
#include <windows.h>
using namespace std;

void asciiface::show() {
	
	system("cls");
	cout << endl << endl;
	switch (wenkbrouwen) {
		case w_boos:cout << "  \\   /" << endl; break;
		case w_lief:cout << "  /   \\" << endl; break;
		default:cout << "  w   w" << endl; break;
	}
	switch (ogen) {
		case o_open:cout << "  O   O" << endl; 	break;
		default:cout << "  _   _" << endl; break;
	}
	cout << "    U" << endl; // neus    
	switch (mond) {
		case m_open:cout << "    O" << endl; break;
		case m_dicht:cout << "   ---"; break;
		default:cout << "  /```\\" << endl; break;
	}
	cout << endl << endl << endl;	// wat ruimte ertussen
}

	void asciiface::change_wenkbrouwen() {
		switch (wenkbrouwen) {
		case w_lief:wenkbrouwen = w_neutraal; break;
		case w_neutraal:wenkbrouwen = w_boos; break;
		default:wenkbrouwen = w_lief; break;
		}
	}

	void asciiface::change_mond() {
		if (wenkbrouwen == w_boos) {
			mond = m_boos;
		}
		else     {       // mond gaat open en dicht
			switch (mond) {
			case m_open:mond = m_dicht; break;
			default:mond = m_open; break;
			}
		}
	}

	void asciiface::change_ogen() {
		//mtx.lock();
		if (ogen == o_open) ogen = o_dicht; else ogen = o_open;
		//mtx.unlock();
	}
