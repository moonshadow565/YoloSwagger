#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class RiotMessagingServiceTokenType_t {
    Access_E = 1,
    Unavailable_E = 0,
    Identity_E = 2,
  };

  inline void to_json(nlohmann::json& j, const RiotMessagingServiceTokenType_t& v) {
    switch(v) {
      case RiotMessagingServiceTokenType_t::Access_E:
        j = "Access";
      break;
      case RiotMessagingServiceTokenType_t::Unavailable_E:
        j = "Unavailable";
      break;
      case RiotMessagingServiceTokenType_t::Identity_E:
        j = "Identity";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, RiotMessagingServiceTokenType_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "Access"){
      v = RiotMessagingServiceTokenType_t::Access_E;
      return;
    }
    if(s == "Unavailable"){
      v = RiotMessagingServiceTokenType_t::Unavailable_E;
      return;
    }
    if(s == "Identity"){
      v = RiotMessagingServiceTokenType_t::Identity_E;
      return;
    }
  }
}
