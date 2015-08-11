
#ifdef HAVE_CONFIG_H
#include "../ext_config.h"
#endif

#include <php.h>
#include "../php_ext.h"
#include "../ext.h"

#include <Zend/zend_operators.h>
#include <Zend/zend_exceptions.h>
#include <Zend/zend_interfaces.h>

#include "kernel/main.h"


ZEPHIR_INIT_CLASS(Utils_Greeting) {

	ZEPHIR_REGISTER_CLASS(Utils, Greeting, utils, greeting, utils_greeting_method_entry, 0);

	return SUCCESS;

}

PHP_METHOD(Utils_Greeting, say) {


	RETURN_STRING("Hello, world!", 1);

}

