#ifdef EVM_DRIVER_UART
#include "evm_module.h"
#include <drivers/uart.h>

//UART(name, baudrate, databits, stopbits, stopbits, flow)
static evm_val_t evm_module_uart(evm_t *e, evm_val_t *p, int argc, evm_val_t *v)
{
	
	return EVM_VAL_UNDEFINED;
}

//UART.read(nbytes,timeout)
static evm_val_t evm_module_uart_read(evm_t *e, evm_val_t *p, int argc, evm_val_t *v)
{
	if(argc>0){
		evm_val_t dev = evm_mk_object((void *)nevm_object_get_ext_data(p));
		
	}
	return EVM_VAL_UNDEFINED;
}


//UART.write(buf)
static evm_val_t evm_module_uart_write(evm_t *e, evm_val_t *p, int argc, evm_val_t *v)
{
	if(argc>0){
		evm_val_t dev = evm_mk_object((void*)nevm_object_get_ext_data(p));
		
	}
	return EVM_VAL_UNDEFINED;
}


evm_val_t evm_class_uart(evm_t * e){
	evm_builtin_t class_uart[] = {
		{"init", evm_mk_native( (intptr_t)evm_module_uart_init )},
		{"deinit", evm_mk_native( (intptr_t)evm_module_uart_deinit )},
		{"any", evm_mk_native( (intptr_t)evm_module_uart_any )},
		{"read", evm_mk_native( (intptr_t)evm_module_uart_read )},
		{"write", evm_mk_native( (intptr_t)evm_module_uart_write )},

		{"PARITY_NONE",evm_mk_native((intptr_t)UART_CFG_PARITY_NONE)},
		{"PARITY_ODD",evm_mk_native((intptr_t)UART_CFG_PARITY_ODD)},
		{"PARITY_EVEN",evm_mk_native((intptr_t)UART_CFG_PARITY_EVEN)},
		{"PARITY_MARK",evm_mk_native((intptr_t)UART_CFG_PARITY_MARK)},
		{"PARITY_SPACE",evm_mk_native((intptr_t)UART_CFG_PARITY_SPACE)},

		{"STOP_BITS_0_5",evm_mk_native((intptr_t)UART_CFG_STOP_BITS_0_5)},
		{"STOP_BITS_1",evm_mk_native((intptr_t)UART_CFG_STOP_BITS_1)},
		{"STOP_BITS_1_5",evm_mk_native((intptr_t)UART_CFG_STOP_BITS_1_5)},
		{"STOP_BITS_2",evm_mk_native((intptr_t)UART_CFG_STOP_BITS_2)},

		{"DATA_BITS_5",evm_mk_native((intptr_t)UART_CFG_DATA_BITS_5)},
		{"DATA_BITS_6",evm_mk_native((intptr_t)UART_CFG_DATA_BITS_6)},
		{"DATA_BITS_7",evm_mk_native((intptr_t)UART_CFG_DATA_BITS_7)},
		{"DATA_BITS_8",evm_mk_native((intptr_t)UART_CFG_DATA_BITS_8)},
		{"DATA_BITS_9",evm_mk_native((intptr_t)UART_CFG_DATA_BITS_9)},

		{"FLOW_CTRL_NONE",evm_mk_native((intptr_t)UART_CFG_FLOW_CTRL_NONE)},
		{"FLOW_CTRL_RTS_CTS",evm_mk_native((intptr_t)UART_CFG_FLOW_CTRL_RTS_CTS)},
		{"FLOW_CTRL_DTR_DSR",evm_mk_native((intptr_t)UART_CFG_FLOW_CTRL_DTR_DSR)},

		{NULL, NULL}
	};
	return *evm_class_create(e, (evm_native_fn)evm_module_uart, class_uart, NULL);
}
#endif
