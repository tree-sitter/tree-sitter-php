all install uninstall clean:
	$(MAKE) -C php $@
	$(MAKE) -C php_only $@

test:
	$(TS) test

.PHONY: all install uninstall clean test update
