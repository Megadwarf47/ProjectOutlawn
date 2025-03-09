///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/PVZUITeamCompBoast.h>
#include <fb/UIComponentData.h>

namespace fb {
	class PVZUITeamCompData : public UIComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PVZUITeamCompData"); }
		virtual ~PVZUITeamCompData() override {}
		PVZUITeamCompData() {
		};

		Array<PVZUITeamCompBoast> m_boasts; // 0x30 (48)
	}; // 0x38 (56)
}

