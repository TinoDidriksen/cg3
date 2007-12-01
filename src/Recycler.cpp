/*
 * Copyright (C) 2006, GrammarSoft Aps
 * and the VISL project at the University of Southern Denmark.
 * All Rights Reserved.
 *
 * The contents of this file are subject to the GrammarSoft Public
 * License Version 1.0 (the "License"); you may not use this file
 * except in compliance with the License. You may obtain a copy of
 * the License at http://www.grammarsoft.com/GSPL or
 * http://visl.sdu.dk/GSPL.txt
 * 
 * Software distributed under the License is distributed on an "AS
 * IS" basis, WITHOUT WARRANTY OF ANY KIND, either express or
 * implied. See the License for the specific language governing
 * rights and limitations under the License.
 */
#include "Recycler.h"

using namespace CG3;

Recycler *Recycler::gRecycler = 0;

Recycler::Recycler() {
	ACohorts = DCohorts = 0;
	AReadings = DReadings = 0;
	Auint32Sets = Duint32Sets = 0;
	for (uint32_t i=0;i<150;i++) {
		Cohort *t = new Cohort(NULL);
		Cohorts.push_back(t);
	}
	for (uint32_t i=0;i<400;i++) {
		Reading *t = new Reading(NULL);
		Readings.push_back(t);
	}
	/*
	for (uint32_t i=0;i<500;i++) {
		uint32Set *t = new uint32Set;
		uint32Sets.push_back(t);
	}
	//*/
}

Recycler::~Recycler() {
	while (!Cohorts.empty()) {
		delete Cohorts.back();
		Cohorts.pop_back();
	}
	while (!Readings.empty()) {
		delete Readings.back();
		Readings.pop_back();
	}
	while (!uint32Sets.empty()) {
		delete uint32Sets.back();
		uint32Sets.pop_back();
	}
}

Recycler *Recycler::instance() {
	if (!gRecycler) {
		gRecycler = new Recycler();
	}
	return gRecycler;
}

void Recycler::cleanup() {
	delete gRecycler;
	gRecycler = 0;
}

Cohort *Recycler::new_Cohort(SingleWindow *p) {
	ACohorts++;
	if (!Cohorts.empty()) {
		Cohort *t = Cohorts.back();
		Cohorts.pop_back();
		t->clear(p);
		return t;
	}
	return new Cohort(p);
}

void Recycler::delete_Cohort(Cohort *t) {
	t->clear(NULL);
	DCohorts++;
	Cohorts.push_back(t);
}

Reading *Recycler::new_Reading(Cohort *p) {
	AReadings++;
	if (!Readings.empty()) {
		Reading *t = Readings.back();
		Readings.pop_back();
		t->clear(p);
		return t;
	}
	return new Reading(p);
}

void Recycler::delete_Reading(Reading *t) {
	t->clear(NULL);
	DReadings++;
	Readings.push_back(t);
}

uint32Set *Recycler::new_uint32Set() {
	Auint32Sets++;
	if (!uint32Sets.empty()) {
		uint32Set *t = uint32Sets.back();
		uint32Sets.pop_back();
		return t;
	}
	return new uint32Set;
}

void Recycler::delete_uint32Set(uint32Set *t) {
	Duint32Sets++;
	t->clear();
	uint32Sets.push_back(t);
}