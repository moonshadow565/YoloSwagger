#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolClashMatchmakingReadyCheckResponse_t {
    Declined_E = 50,
    None_E = 48,
    Accepted_E = 49,
  };

  inline void to_json(nlohmann::json& j, const LolClashMatchmakingReadyCheckResponse_t& v) {
    switch(v) {
      case LolClashMatchmakingReadyCheckResponse_t::Declined_E:
        j = "Declined";
      break;
      case LolClashMatchmakingReadyCheckResponse_t::None_E:
        j = "None";
      break;
      case LolClashMatchmakingReadyCheckResponse_t::Accepted_E:
        j = "Accepted";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolClashMatchmakingReadyCheckResponse_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "Declined"){
      v = LolClashMatchmakingReadyCheckResponse_t::Declined_E;
      return;
    }
    if(s == "None"){
      v = LolClashMatchmakingReadyCheckResponse_t::None_E;
      return;
    }
    if(s == "Accepted"){
      v = LolClashMatchmakingReadyCheckResponse_t::Accepted_E;
      return;
    }
  }
  inline std::string to_string(const LolClashMatchmakingReadyCheckResponse_t& v) {
    switch(v) {
      case LolClashMatchmakingReadyCheckResponse_t::Declined_E:
        return "Declined";
      case LolClashMatchmakingReadyCheckResponse_t::None_E:
        return "None";
      case LolClashMatchmakingReadyCheckResponse_t::Accepted_E:
        return "Accepted";
    }
  }

}
