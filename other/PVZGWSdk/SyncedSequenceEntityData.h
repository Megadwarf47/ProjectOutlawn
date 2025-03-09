///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/SequenceEntityData.h>

namespace fb {
	class SyncedSequenceEntityData : public SequenceEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SyncedSequenceEntityData"); }
		virtual ~SyncedSequenceEntityData() override {}
		virtual Realm getRealm() const override { return Realm_ClientAndServer; }
		SyncedSequenceEntityData() {
			m_interpolateTime = true;

			m_realm = Realm::Realm_ClientAndServer;
			m_clientUpdatePass = UpdatePass::UpdatePass_PostSim;
			m_serverUpdatePass = UpdatePass::UpdatePass_PostSim;
		};

		bool m_interpolateTime; // 0x58 (88)
	}; // 0x60 (96)
}

