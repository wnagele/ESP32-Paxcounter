.DEFAULT_GOAL := all

init:
	cp src/loraconf.sample.h src/loraconf.h
	cp src/ota.sample.conf src/ota.conf

clean:
	platformio run --target clean
	rm src/loraconf.h
	rm src/ota.conf

build:
	platformio run

upload:
	platformio run --target upload

all:
	@$(MAKE) init
	@$(MAKE) build
	@$(MAKE) upload
