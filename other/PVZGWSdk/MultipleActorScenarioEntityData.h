///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AntRef.h>
#include <fb/LinearTransform.h>
#include <fb/Realm.h>
#include <fb/SpatialEntityData.h>

namespace fb {
	class MultipleActorScenarioEntityData : public SpatialEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("MultipleActorScenarioEntityData"); }
		virtual ~MultipleActorScenarioEntityData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		MultipleActorScenarioEntityData() {
			m_levelChoice = -1;
			m_scenarioChoice = -1;
			m_actor1 = -1;
			m_actor1Part = -1;
			m_actor1SecondPart = -1;
			m_actor2 = -1;
			m_actor2Part = -1;
			m_actor2SecondPart = -1;
			m_actor3 = -1;
			m_actor3Part = -1;
			m_actor3SecondPart = -1;
			m_actor4 = -1;
			m_actor4Part = -1;
			m_actor4SecondPart = -1;
			m_actor5 = -1;
			m_actor5Part = -1;
			m_actor5SecondPart = -1;
			m_actor6 = -1;
			m_actor6Part = -1;
			m_actor6SecondPart = -1;
			m_externalTime = -1.f;
			m_realm = Realm::Realm_Client;
			m_worldSpace = false;
			m_aligningEnabled = true;
			m_useInputEventPlayerAsPlayer1 = false;
			m_scenarioActive = false;
			m_actor1Prepared = true;
			m_actor2Prepared = true;
			m_actor3Prepared = true;
			m_actor4Prepared = true;
			m_actor5Prepared = true;
			m_actor6Prepared = true;
			m_checkActor1Finished = true;
			m_checkActor2Finished = true;
			m_checkActor3Finished = true;
			m_checkActor4Finished = true;
			m_checkActor5Finished = true;
			m_checkActor6Finished = true;
			m_useExternalTime = false;
		};

		LinearTransform m_worldSpaceConnectTransform; // 0x60 (96)
		AntRef m_scenarioAntRef; // 0xA0 (160)
		s32 m_levelChoice; // 0xB4 (180)
		s32 m_scenarioChoice; // 0xB8 (184)
		s32 m_actor1; // 0xBC (188)
		s32 m_actor1Part; // 0xC0 (192)
		s32 m_actor1SecondPart; // 0xC4 (196)
		s32 m_actor2; // 0xC8 (200)
		s32 m_actor2Part; // 0xCC (204)
		s32 m_actor2SecondPart; // 0xD0 (208)
		s32 m_actor3; // 0xD4 (212)
		s32 m_actor3Part; // 0xD8 (216)
		s32 m_actor3SecondPart; // 0xDC (220)
		s32 m_actor4; // 0xE0 (224)
		s32 m_actor4Part; // 0xE4 (228)
		s32 m_actor4SecondPart; // 0xE8 (232)
		s32 m_actor5; // 0xEC (236)
		s32 m_actor5Part; // 0xF0 (240)
		s32 m_actor5SecondPart; // 0xF4 (244)
		s32 m_actor6; // 0xF8 (248)
		s32 m_actor6Part; // 0xFC (252)
		s32 m_actor6SecondPart; // 0x100 (256)
		float m_externalTime; // 0x104 (260)
		Realm m_realm; // 0x108 (264)
		bool m_worldSpace; // 0x10C (268)
		bool m_aligningEnabled; // 0x10D (269)
		bool m_useInputEventPlayerAsPlayer1; // 0x10E (270)
		bool m_scenarioActive; // 0x10F (271)
		bool m_actor1Prepared; // 0x110 (272)
		bool m_actor2Prepared; // 0x111 (273)
		bool m_actor3Prepared; // 0x112 (274)
		bool m_actor4Prepared; // 0x113 (275)
		bool m_actor5Prepared; // 0x114 (276)
		bool m_actor6Prepared; // 0x115 (277)
		bool m_checkActor1Finished; // 0x116 (278)
		bool m_checkActor2Finished; // 0x117 (279)
		bool m_checkActor3Finished; // 0x118 (280)
		bool m_checkActor4Finished; // 0x119 (281)
		bool m_checkActor5Finished; // 0x11A (282)
		bool m_checkActor6Finished; // 0x11B (283)
		bool m_useExternalTime; // 0x11C (284)
	}; // 0x120 (288)
}

