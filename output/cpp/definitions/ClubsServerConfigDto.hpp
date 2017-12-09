#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct ClubsServerConfigDto_t {
    int32_t clubDescriptionMaxLength;
    int32_t maxClubNameLength;
    int32_t clubTagRequirementsMinMemberLevel;
    int32_t minClubTagLength;
    int32_t minClubNameLength;
    bool clubNominationsEnabled;
    int32_t maxClubTagLength;
    int32_t clubNominationsMaxPending;
    int32_t clubMotdMaxLength;
    int32_t clubTagRequirementMinGames;
    int32_t clubTagRequirementMinMembers;
    int32_t maxActiveClubs;
  };

  inline void to_json(nlohmann::json& j, const ClubsServerConfigDto_t& v) {
    j["clubDescriptionMaxLength"] = v.clubDescriptionMaxLength;
    j["maxClubNameLength"] = v.maxClubNameLength;
    j["clubTagRequirementsMinMemberLevel"] = v.clubTagRequirementsMinMemberLevel;
    j["minClubTagLength"] = v.minClubTagLength;
    j["minClubNameLength"] = v.minClubNameLength;
    j["clubNominationsEnabled"] = v.clubNominationsEnabled;
    j["maxClubTagLength"] = v.maxClubTagLength;
    j["clubNominationsMaxPending"] = v.clubNominationsMaxPending;
    j["clubMotdMaxLength"] = v.clubMotdMaxLength;
    j["clubTagRequirementMinGames"] = v.clubTagRequirementMinGames;
    j["clubTagRequirementMinMembers"] = v.clubTagRequirementMinMembers;
    j["maxActiveClubs"] = v.maxActiveClubs;
  }

  inline void from_json(const nlohmann::json& j, ClubsServerConfigDto_t& v) {
    v.clubDescriptionMaxLength = j.at("clubDescriptionMaxLength").get<int32_t>();
    v.maxClubNameLength = j.at("maxClubNameLength").get<int32_t>();
    v.clubTagRequirementsMinMemberLevel = j.at("clubTagRequirementsMinMemberLevel").get<int32_t>();
    v.minClubTagLength = j.at("minClubTagLength").get<int32_t>();
    v.minClubNameLength = j.at("minClubNameLength").get<int32_t>();
    v.clubNominationsEnabled = j.at("clubNominationsEnabled").get<bool>();
    v.maxClubTagLength = j.at("maxClubTagLength").get<int32_t>();
    v.clubNominationsMaxPending = j.at("clubNominationsMaxPending").get<int32_t>();
    v.clubMotdMaxLength = j.at("clubMotdMaxLength").get<int32_t>();
    v.clubTagRequirementMinGames = j.at("clubTagRequirementMinGames").get<int32_t>();
    v.clubTagRequirementMinMembers = j.at("clubTagRequirementMinMembers").get<int32_t>();
    v.maxActiveClubs = j.at("maxActiveClubs").get<int32_t>();
  }
  inline std::string to_string(const ClubsServerConfigDto_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
