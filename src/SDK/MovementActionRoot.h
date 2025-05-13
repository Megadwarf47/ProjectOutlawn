///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Asset.h>
#include <fb/CtrRef.h>

namespace fb {
	class MovementActionData;
}

namespace fb {
	class MovementActionRoot : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("MovementActionRoot"); }
		virtual ~MovementActionRoot() override {}
		MovementActionRoot() {
		};

		CtrRef<MovementActionData> m_startSequence; // 0x18 (24)
	}; // 0x20 (32)
}

