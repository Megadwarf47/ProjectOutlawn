///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/DataContainer.h>
#include <fb/Dialect.h>

namespace fb {
	class NuiSpeechConfidencePolicy;
}

namespace fb {
	class NuiSpeechConfidenceDialectPolicy : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("NuiSpeechConfidenceDialectPolicy"); }
		virtual ~NuiSpeechConfidenceDialectPolicy() override {}
		NuiSpeechConfidenceDialectPolicy() {
			m_dialect = Dialect::Dialect_DE;
		};

		Dialect m_dialect; // 0x10 (16)
		CtrRef<NuiSpeechConfidencePolicy> m_policy; // 0x18 (24)
	}; // 0x20 (32)
}

