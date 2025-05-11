///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/GameComponentData.h>

namespace fb {
	class GroupComponentData : public GameComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("GroupComponentData"); }
		virtual ~GroupComponentData() override {}
		GroupComponentData() {
			m_excluded = true;
		};

	}; // 0x70 (112)
}

