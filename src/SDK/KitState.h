///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/MetricState.h>
#include <fb/String.h>

namespace fb {
	class KitState : public MetricState {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("KitState"); }
		virtual ~KitState() override {}
		KitState() {
		};

		String m_kit; // 0x20 (32)
	}; // 0x28 (40)
}

