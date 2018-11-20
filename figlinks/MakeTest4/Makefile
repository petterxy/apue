#maindir Makefile
.PHONY :test
test:
	@echo "main level = $(MAKELEVEL)"
	@$(MAKE) -C subdir
	@mkdir testo

cur-dir=${cur-dir}/$@ -C $@ all

.PHONY :test1
test1:
	echo ${cur-dir}
