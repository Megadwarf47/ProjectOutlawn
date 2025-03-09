///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CommanderActionBaseData.h>
#include <fb/CtrRef.h>

namespace fb {
	class PrefabBlueprint;
}

namespace fb {
	class SectorScanActionData : public CommanderActionBaseData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SectorScanActionData"); }
		virtual ~SectorScanActionData() override {}
		SectorScanActionData() {
			m_scanFrequency = 2.f;
			m_scanRadius = 50.f;
		};

		float m_scanFrequency; // 0x30 (48)
		float m_scanRadius; // 0x34 (52)
		CtrRef<PrefabBlueprint> m_uavDronePrefabBlueprint; // 0x38 (56)
	}; // 0x40 (64)
}

