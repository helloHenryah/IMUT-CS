// pages/meet/meet.js
Page({

  /**
   * 页面的初始数据
   */
  data: {
    latitude: 40.78813220332579,
    longitude: 111.55315136207332,
    markers: [{
      id:'001',
      latitude: 40.78813220332579,
      longitude: 111.55315136207332,
      iconPath:'/pages/img/location.png',
      label:{
        content:'会议地点'
      }
    }]
  },
  zt: function (options) {
    wx.navigateTo({
      url: '/pages/logs/logs',
    })
  },
  zcinfo: function (options) {
    wx.navigateTo({
      url: '/pages/index/index',
    })
  },
  zc: function (options) {
    wx.navigateTo({
      url: '/pages/zcinfo/zcinfo',
    })
  },
  /**
   * 生命周期函数--监听页面加载
   */
  onLoad: function (options) {

  },

  /**
   * 生命周期函数--监听页面初次渲染完成
   */
  onReady: function () {

  },

  /**
   * 生命周期函数--监听页面显示
   */
  onShow: function () {

  },

  /**
   * 生命周期函数--监听页面隐藏
   */
  onHide: function () {

  },

  /**
   * 生命周期函数--监听页面卸载
   */
  onUnload: function () {

  },

  /**
   * 页面相关事件处理函数--监听用户下拉动作
   */
  onPullDownRefresh: function () {

  },

  /**
   * 页面上拉触底事件的处理函数
   */
  onReachBottom: function () {

  },

  /**
   * 用户点击右上角分享
   */
  onShareAppMessage: function () {

  }
})