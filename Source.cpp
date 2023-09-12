#include <iostream>
#include <string>

using namespace std;

struct LoaiHang {
	string strMaHang;
	int iSoLuong;

	string getstrMaHang() {
		return strMaHang;
	}
	void setstrMaHang(string s) {
		strMaHang = s;
	}
	int getiSoLuong() {
		return iSoLuong;
	}
	void setiSoLuong(int x) {
		iSoLuong = x;
	}

	friend istream& operator >> (istream& is, LoaiHang& lh) {
		is.ignore();
		getline(is, lh.strMaHang);
		if (lh.strMaHang.length() !=4) {
			cout << "Ma hang gom 4 ki tu !!! Moi nhap lai." << endl;
			getline(is, lh.strMaHang);
		}
		is >> lh.iSoLuong;
		if (lh.iSoLuong < 0) {
			cout << "So luong hang phai lon hon 0!!! Moi nhap lai." << endl;
			is >> lh.iSoLuong;
		}
		return is;
	}
	
};

class DonHang {
	LoaiHang lhLoaiHang;
	float fTongTien;
	string strTenKhachHang, strDiaChi, strSoDienThoai, strNgayDatHang;
public: 
	string getstrTenKhachHang() {
		return strTenKhachHang;
	}
	void setstrTenKhachHang(string s) {
		strTenKhachHang = s;
	}
	string getstrDiaChi() {
		return strDiaChi;
	}
	void setstrDiaChi(string s) {
		strDiaChi = s;
	}
	string getstrSoDienThoai() {
		return strSoDienThoai;
	}
	void setstrSoDienThoai(string s) {
		strSoDienThoai = s;
	}
	string getstrNgayDatHang() {
		return strNgayDatHang;
	}
	void setstrNgayDatHang(string s) {
		strNgayDatHang = s;
	}
	float getfTongTien() {
		return fTongTien;
	}
	void setfTongTien(float x) {
		fTongTien = x;
	}
	LoaiHang getlhLoaiHang() {
		return lhLoaiHang;
	}
	void setlhLoaiHang(LoaiHang lh) {
		lhLoaiHang = lh;
	}

	DonHang() {
		strTenKhachHang = "";
		strDiaChi = "";
		strSoDienThoai = "";
		strNgayDatHang = "";
		fTongTien = 0;
	}

	friend istream& operator >> (istream& is, DonHang& dh) {
		is >> dh.lhLoaiHang;
		is >> dh.fTongTien;
		if (dh.fTongTien < 0) {
			cout << "Tong tien phai lon hon khong!!! Moi nhap lai" << endl;
			is >> dh.fTongTien;
		}
		is.ignore();
		getline(is, dh.strTenKhachHang);
		getline(is, dh.strDiaChi);
		getline(is, dh.strSoDienThoai);
		if (dh.strSoDienThoai.length() != 10) {
			cout << "So dien thoai phai co 10 so!!! Moi nhap lai" << endl;
			getline(is, dh.strSoDienThoai);
		}
		getline(is, dh.strNgayDatHang);
		if (dh.strNgayDatHang.length() != 10) {
			cout << "Ngay dat hang phai co 10 ky tu!!! Moi nhap lai" << endl;
			getline(is, dh.strNgayDatHang);
		}
		
	}

};

