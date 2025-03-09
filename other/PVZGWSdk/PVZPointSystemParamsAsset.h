///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/PVZPointSystemParamsEndOfRoundStats.h>
#include <fb/PointSystemParamsAsset.h>
#include <fb/StatEvent.h>

namespace fb {
	class PVZPointSystemParamsAsset : public PointSystemParamsAsset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PVZPointSystemParamsAsset"); }
		virtual ~PVZPointSystemParamsAsset() override {}
		PVZPointSystemParamsAsset() {
		};

		PVZPointSystemParamsEndOfRoundStats m_endOfRoundStats; // 0x48 (72)
		Array<StatEvent> m_scoredStats; // 0x58 (88)
	}; // 0x60 (96)
}

