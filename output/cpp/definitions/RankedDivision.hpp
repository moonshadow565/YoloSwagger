#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class RankedDivision_t {
    III_E = 3,
    II_E = 2,
    I_E = 1,
    V_E = 5,
    IV_E = 4,
  };

  inline void to_json(nlohmann::json& j, const RankedDivision_t& v) {
    switch(v) {
      case RankedDivision_t::III_E:
        j = "III";
      break;
      case RankedDivision_t::II_E:
        j = "II";
      break;
      case RankedDivision_t::I_E:
        j = "I";
      break;
      case RankedDivision_t::V_E:
        j = "V";
      break;
      case RankedDivision_t::IV_E:
        j = "IV";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, RankedDivision_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "III"){
      v = RankedDivision_t::III_E;
      return;
    }
    if(s == "II"){
      v = RankedDivision_t::II_E;
      return;
    }
    if(s == "I"){
      v = RankedDivision_t::I_E;
      return;
    }
    if(s == "V"){
      v = RankedDivision_t::V_E;
      return;
    }
    if(s == "IV"){
      v = RankedDivision_t::IV_E;
      return;
    }
  }
  inline std::string to_string(const RankedDivision_t& v) {
    switch(v) {
      case RankedDivision_t::III_E:
        return "III";
      case RankedDivision_t::II_E:
        return "II";
      case RankedDivision_t::I_E:
        return "I";
      case RankedDivision_t::V_E:
        return "V";
      case RankedDivision_t::IV_E:
        return "IV";
    }
  }

}
