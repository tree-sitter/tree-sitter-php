TS ?= tree-sitter

all install uninstall clean:
	$(MAKE) -C php $@
	$(MAKE) -C php_only $@

generate:
	cd php && $(TS) generate --no-bindings
	cd php_only && $(TS) generate --no-bindings

test:
	$(TS) test

.PHONY: all install uninstall clean test update generate
