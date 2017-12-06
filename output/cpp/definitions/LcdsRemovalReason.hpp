#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LcdsRemovalReason_t {
    DESTROYED_E = 1,
    KICKED_E = 0,
    PROGRESSED_E = 2,
  };

  inline void to_json(nlohmann::json& j, const LcdsRemovalReason_t& v) {
    switch(v) {
      case LcdsRemovalReason_t::DESTROYED_E:
        j = "DESTROYED";
      break;
      case LcdsRemovalReason_t::KICKED_E:
        j = "KICKED";
      break;
      case LcdsRemovalReason_t::PROGRESSED_E:
        j = "PROGRESSED";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LcdsRemovalReason_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "DESTROYED"){
      v = LcdsRemovalReason_t::DESTROYED_E;
      return;
    }
    if(s == "KICKED"){
      v = LcdsRemovalReason_t::KICKED_E;
      return;
    }
    if(s == "PROGRESSED"){
      v = LcdsRemovalReason_t::PROGRESSED_E;
      return;
    }
  }
}
