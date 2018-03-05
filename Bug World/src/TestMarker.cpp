/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   TestMarker.cpp
 * Author: ali
 * 
 * Created on February 27, 2018, 1:57 AM
 */

#include <iostream>
#include "Marker.h"
using namespace std;


/*Testing set marker*/
bool test_set_Marker(){
    Marker mark;
    mark.set_marker(4,1);
    return mark.get_marker() == 1<<10;
}

bool test_set_Marker_raises_both_exceptions(){
    Marker mark;
    try{
        mark.set_marker(6,-2);
        return false;
    }
    catch (const invalid_argument &invalid){
        return true;
    }
}

bool test_set_Marker_color_exception(){
    Marker mark;
    try{
        mark.set_marker(2,7);
        return false;
    }
    catch (const invalid_argument &invalid){
        return true;
    }
}

bool test_set_Marker_marker_exception(){
    Marker mark;
    try{
        mark.set_marker(7,0);
        return false;
    }
    catch (const invalid_argument &invalid){
        return true;
    }
}
/*Testing clear marker*/
bool test_clear_Marker(){
    Marker mark;
    mark.set_marker(3,0);
    mark.clear_marker(3,0);
    return mark.get_marker() == 0;
}

bool test_clear_Marker_raises_both_exceptions(){
    Marker mark;
    try{
        mark.clear_marker(6,-2);
        return false;
    }
    catch (const invalid_argument &invalid){
        return true;
    }
}

bool test_clear_Marker_color_exception(){
    Marker mark;
    try{
        mark.clear_marker(3,8);
        return false;
    }
    catch (const invalid_argument &invalid){
        return true;
    }
}

bool test_clear_Marker_marker_exception(){
    Marker mark;
    try{
        mark.clear_marker(7,0);
        return false;
    }
    catch (const invalid_argument &invalid){
        return true;
    }
}

/*Testing check marker*/
bool test_check_Marker(){
    Marker mark;
    mark.set_marker(3,0);
    return mark.check_marker(3,0);
}

bool test_check_Marker_marker_exception(){
    Marker mark;
    mark.set_marker(3,0);
    try{
        mark.check_marker(8,0);
        return false;
    }
    catch (const invalid_argument &invalid){
        return true;
    }
}

bool test_check_Marker_color_exception(){
    Marker mark;
    mark.set_marker(3,0);
    try{
        mark.check_marker(3,8);
        return false;
    }
    catch (const invalid_argument &invalid){
        return true;
    }
}

bool test_check_Marker_raises_both_exceptions(){
    Marker mark;
    mark.set_marker(3,0);
    try{
        mark.check_marker(9,5);
        return false;
    }
    catch (const invalid_argument &invalid){
        return true;
    }
}


/*Testing clear other marker*/
bool test_check_other_Marker(){
    Marker mark;
    mark.set_marker(3,0);
    return mark.check_other_marker(0);
}

bool test_check_other_Marker_color_exception(){
    Marker mark;
    try{
        mark.check_other_marker(7);
        return false;
    }
    catch (const invalid_argument &invalid){
        return true;
    }
}

int main() {
    int fail = 0;
    /*test set marker*/
    if (!test_set_Marker()) {
        cout << "set marker() Failure" << endl;
        fail++;
    }

    if (!test_set_Marker_except_color()){
        cout << "set marker failed because of wrong color input" << endl;
        fail++;
    }
    
    if (!test_set_Marker_except_marker()){
        cout << "sset marker failed because of wrong marker input" << endl;
        fail++;
    }
    
    if (!test_set_Marker_except()) {
        cout << "set marker failed because of both wrong inputs" << endl;
        fail++;
    }
    
     /*test clear marker*/
    if (!test_clear_Marker()) {
        cout << "clear marker Failure" << endl;
        fail++;
    }
    
    if (!test_clear_Marker_except_color()) {
        cout << "clear marker failed because of wrong color input" << endl;
        fail++;
    }

    if (!test_clear_Marker_except_marker()) {
        cout << "clear marker failed because of wrong marker input" << endl;
        fail++;
    }

    if (!test_clear_Marker_except()) {
        cout << "clear marker failed because of both wrong inputs" << endl;
        fail++; << endl;
        fail++;
    }
    
    
     /*test check marker*/
    if (!test_check_Marker()) {
        cout << "check marker Failure" << endl;
        fail++;
    }

    if (!test_check_Marker_except_color()){
        cout << "check marker with wrong marker input failed!" << endl;
        fail++;
    }
    
    if (!test_check_Marker_except_marker()){
        cout << "check marker failed because of wrong color input" << endl;
        fail++;
    }
    
    if (!test_check_Marker_except()){
        cout << "check arker failed because of both wrong inputs" << endl;
        fail++;
    }
    
    
     /*test check other marker marker*/
    if (!test_check_other_Marker()) {
        cout << "check other marker Failure" << endl;
        fail++;
    }
    
    if (!test_check_other_Marker_except()) {
        cout << "check other marker with wrong input failed!" << endl;
        fail++;
    }

    cout << fail << " number of  test cases failed." << endl;
    
    return (EXIT_SUCCESS);
}
