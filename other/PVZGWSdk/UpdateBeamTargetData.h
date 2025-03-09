///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/LocationSelection.h>
#include <fb/ProcessorData.h>

namespace fb {
	class UpdateBeamTargetData : public ProcessorData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UpdateBeamTargetData"); }
		virtual ~UpdateBeamTargetData() override {}
		UpdateBeamTargetData() {
			m_target = LocationSelection::LsParticle;
		};

		LocationSelection m_target; // 0x28 (40)
	}; // 0x30 (48)
}

