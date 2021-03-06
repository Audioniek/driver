#ifndef _DVB_CA_CORE_H_
#define _DVB_CA_CORE_H_

#include "dvb_ca_en50221.h"
#include "dvb_frontend.h"

struct dvb_ca_state
{
	struct dvb_adapter      *dvb_adap;
	struct dvb_frontend_ops ops;
	struct dvb_ca_en50221   ca;
	struct i2c_adapter      *i2c;
	int                     i2c_addr;
	int                     module_ready[2];
#if defined(HS8200) || defined(FS9000)
	int                     module_present[2];
#endif
	unsigned long           detection_timeout[2];
};

int init_cimax(struct dvb_adapter *dvb_adap);

int setCiSource(int slot, int source);

#endif
// vim:ts=4
