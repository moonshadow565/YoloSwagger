using System.Runtime.Serialization;
namespace leagueapi {
  [DataContract]  enum LolLobbyTeamBuilderMatchmakingReadyCheckResponse {
    [DataMember(Name = "Accepted")]
    Accepted = 49,

    [DataMember(Name = "Declined")]
    Declined = 50,

    [DataMember(Name = "None")]
    None = 48,

  }
}