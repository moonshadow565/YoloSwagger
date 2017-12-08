#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolLeaguesLeagueRank_t {
    I_E = 0,
    IV_E = 3,
    II_E = 1,
    NA_E = 5,
    III_E = 2,
    V_E = 4,
  };

  inline void to_json(nlohmann::json& j, const LolLeaguesLeagueRank_t& v) {
    switch(v) {
      case LolLeaguesLeagueRank_t::I_E:
        j = "I";
      break;
      case LolLeaguesLeagueRank_t::IV_E:
        j = "IV";
      break;
      case LolLeaguesLeagueRank_t::II_E:
        j = "II";
      break;
      case LolLeaguesLeagueRank_t::NA_E:
        j = "NA";
      break;
      case LolLeaguesLeagueRank_t::III_E:
        j = "III";
      break;
      case LolLeaguesLeagueRank_t::V_E:
        j = "V";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolLeaguesLeagueRank_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "I"){
      v = LolLeaguesLeagueRank_t::I_E;
      return;
    }
    if(s == "IV"){
      v = LolLeaguesLeagueRank_t::IV_E;
      return;
    }
    if(s == "II"){
      v = LolLeaguesLeagueRank_t::II_E;
      return;
    }
    if(s == "NA"){
      v = LolLeaguesLeagueRank_t::NA_E;
      return;
    }
    if(s == "III"){
      v = LolLeaguesLeagueRank_t::III_E;
      return;
    }
    if(s == "V"){
      v = LolLeaguesLeagueRank_t::V_E;
      return;
    }
  }
  inline std::string to_string(const LolLeaguesLeagueRank_t& v) {
    switch(v) {
      case LolLeaguesLeagueRank_t::I_E:
        return "I";
      case LolLeaguesLeagueRank_t::IV_E:
        return "IV";
      case LolLeaguesLeagueRank_t::II_E:
        return "II";
      case LolLeaguesLeagueRank_t::NA_E:
        return "NA";
      case LolLeaguesLeagueRank_t::III_E:
        return "III";
      case LolLeaguesLeagueRank_t::V_E:
        return "V";
    }
  }

}
